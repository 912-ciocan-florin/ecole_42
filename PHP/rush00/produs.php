<?php
require_once('config.php');
require_once('functions.php');

if(isset($_GET['id'])){
  $id = htmlentities($_GET['id']);
}
else {
  header('Location: index.php');
}

$query = "SELECT * FROM produse WHERE ID='$id'";
$result = mysqli_query($con, $query);
$produs = mysqli_fetch_assoc($result);
?>
<html>
  <head>
    <meta charset="utf-8">
    <title><?php echo $produs['Nume'] ?></title>
    <link rel="stylesheet" type="text/css" href="style.css">
  </head>
  <body>
    <ul class="nav">
      <li class="nav"><a class="active nav" href="index.php">Home</a></li>

<?php
putNav($con);
echo '<img class="prod-img" src="'.$produs['IMG'].'">';
echo "<table>";
echo "<tr>";
echo "<th> Nume: </th>";
echo "<td>".$produs['Nume']."</td>";
echo "</tr>";
echo "<tr>";
echo "<th> Pret: </th>";
echo "<td>".$produs['Pret']." RON</td>";
echo "</tr>";
echo "</tr>";
echo "<tr>";
echo "<th> Categorie: </th>";
echo "<td>Categorie:".getCatById($con, $produs['Categorie'])."</td>";
echo "</tr>";
echo "</table>";
  echo '<a class="addbasket" href="tobasket.php?id='.$produs['ID'].'">Adauga in Cos</a>';
?>
</body>
</html>
