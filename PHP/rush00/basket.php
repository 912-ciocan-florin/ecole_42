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

echo "<table>";
if(isset($_SESSION['basket'])){
  $total = 0;
  $basket = unserialize($_SESSION['basket']);
  foreach ($basket as $product => $cant) {
    $id = htmlentities($product);
    $query = "SELECT * FROM produse WHERE ID='$id'";
    $result = mysqli_query($con, $query);
    $prod = mysqli_fetch_assoc($result);
    echo "<tr>";
    echo "<td>Nume: ".$prod['Nume']."</td>";
    echo "<td>Pret: ".$prod['Pret']." RON</td>";
    echo "<td>Cantitate: ".$cant."</td>";
    echo '<td><a href="remove.php?id='.$prod['ID'].'"> -1</a></td>';
    echo '<td><a href="tobasket.php?id='.$prod['ID'].'"> +1</a></td>';
    echo "</tr>";
    $total += $cant * $prod['Pret'];
  }
  echo "</table>";
  echo "Total:$total RON";
}
?>
</body>
</html>
