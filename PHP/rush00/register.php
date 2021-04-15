<html>
  <head>
    <meta charset="utf-8">
    <title>Online Shop</title>
    <link rel="stylesheet" type="text/css" href="style.css">
  </head>
  <body>
    <ul class="nav">
      <li class="nav"><a class="active nav" href="index.php">Home</a></li>
<?php
require_once('config.php');
require_once('functions.php');

putNav($con);
if(isset($_POST['user']) && isset($_POST['pass'])){
  $user = htmlentities($_POST['user']);
  $pass = htmlentities($_POST['pass']);
  $pass = hash("sha256", $pass);
  $query = "SELECT * FROM conturi WHERE User='$user'";
  $result = mysqli_query($con, $query);
  if(mysqli_num_rows($result) == 0){
    $query = "INSERT INTO conturi (User, Pass, Acces) VALUES ('$user','$pass','0')";
    $result = mysqli_query($con, $query);
    echo mysqli_error($con);
  }
  else {
  echo "User already registred!";
  }
}

$form = '<form class="register" action="register.php" method="post">
         <div class="imgcontainer">
           <img src="img/avatar.png" alt="Avatar" class="avatar">
         </div>
         <label><b>Username</b></label>
         <input type="text" placeholder="Enter Username" name="user" required>
         <label><b>Password</b></label>
         <input type="password" placeholder="Enter Password" name="pass" required>
         <button type="submit">Register</button>';
  echo $form;
?>
</body>
</html>
