<!DOCTYPE html>
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
if (isset($_GET['cat'])){
  $cat = htmlentities($_GET['cat']);
  $query = "SELECT * FROM produse WHERE  Categorie='$cat' LIMIT 30";
}
else {
  $query = "SELECT * FROM produse LIMIT 30";
}

$result = mysqli_query($con, $query);
echo '<div class="product-container">';
while ($produs = mysqli_fetch_assoc($result)) {
        echo '<div class="product">';
        echo '<div class="prod-img"><a href="produs.php?id='.$produs['ID'].'".><img class="prod-img" src="'.$produs['IMG'].'"></a></div>';
        echo '<div><a class="prod-nume" href="produs.php?id='.$produs['ID'].'"><h2>'.$produs['Nume'].'</h2></a></div>';
        echo '<div class="prod-pret">'.$produs['Pret']." RON</div>";
        echo '<div class="addbasket"><a class="addbasket" href="tobasket.php?id='.$produs['ID'].'">Adauga in Cos</a></div>';
        echo "</div>";
}
echo "</div>";
?>
</body>
</html>
