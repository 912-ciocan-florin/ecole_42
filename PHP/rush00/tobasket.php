<?php
require_once('config.php');
require_once('functions.php');

putNav($con);

$id = htmlentities($_GET['id']);
$basket = array();
if(isset($_SESSION['basket'])){
  $basket = unserialize($_SESSION['basket']);
  if (array_key_exists($id, $basket)){
    $basket[$id]++;
  }
  else {
    $basket[$id] = 1;
  }
}
else {
  $basket[$id] = 1;
}
$_SESSION['basket'] = serialize($basket);
header('Location: basket.php');

?>
