<?php


function randomString($length) {
	$str = "";
	$characters = array_merge(range('A','Z'), range('a','z'), range('0','9'));
	$max = count($characters) - 1;
	for ($i = 0; $i < $length; $i++) {
		$rand = mt_rand(0, $max);
		$str .= $characters[$rand];
	}
	return $str;
}

function isAdmin($con){
  $acces = 0;
  if (isset($_SESSION['session']) && strlen($_SESSION['session']) == 20) {
    $ses = $_SESSION['session'];
    $query = "SELECT Acces FROM conturi WHERE Session='$ses'";
    $result = mysqli_query($con, $query);
    $acces = mysqli_fetch_assoc($result);
  }
  return $acces['Acces'];
}

function putNav($con){
  session_start();

  if (isset($_SESSION['basket']))
    echo '<li class="nav"><a class="nav" href="basket.php">Basket: '.count(unserialize($_SESSION['basket'])).' Produs(e)</a></li>';
  else {
    echo '<li class="nav"><a class="nav" href="basket.php">Basket</a></li>';
  }

  if (isset($_SESSION['session']) && strlen($_SESSION['session']) == 20) {
    $ses = htmlentities($_SESSION['session']);
    $query = "SELECT USER FROM conturi WHERE Session='$ses'";
    $result = mysqli_query($con, $query);
    if(mysqli_num_rows($result) == 1){
      $account = mysqli_fetch_array($result);
      $nume = $account['USER'];
    }

  }
  else {
    $nume = "Anonim";
  }
  if($nume != "Anonim"){
    echo '<li class="nav"><a class="nav">Salut '.$nume.'</a></li>';
    echo '<li class="nav"><a class="nav" href="logout.php">Logout</a></li>';

  }
  else {
    echo '<li class="nav"><a class="nav" href="login.php">Login</a></li>';
    echo '<li class="nav"><a class="nav" href="register.php">Register</a></li>';
  }
  if(isAdmin($con)){
    echo '<li class="nav"><a class="nav" href="addprod.php">Adauga Produs</a></li>';
  }
?>
<div class="dropdown">
  <button class="dropbtn">Categorii</button>
          <div class="dropdown-content">
<?php
    $query = "SELECT * FROM categorii";
    $result = mysqli_query($con, $query);
    while($row = mysqli_fetch_assoc($result)){
      echo '<a href="index.php?cat='.$row['ID'].'">'.$row['Denumire'].'</a>';
    }
    echo '</div></div></ul>';

}

function getCatByID($con, $id){
  $query = "SELECT * FROM categorii WHERE ID='$id'";
  $result = mysqli_query($con, $query);
  $row = mysqli_fetch_row($result);
  return $row[1];
}
?>
