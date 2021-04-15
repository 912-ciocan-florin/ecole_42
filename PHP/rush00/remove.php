<?php
require_once('config.php');
require_once('functions.php');

putNav($con);

$id = htmlentities($_GET['id']);
if(isset($_SESSION['basket'])){
  $basket = unserialize($_SESSION['basket']);
  if (array_key_exists($id, $basket)){
    if($basket[$id] == 1)
      unset($basket[$id]);
      else {
        $basket[$id]--;
      }
  }
}
$_SESSION['basket'] = serialize($basket);
header('Location: basket.php');

?>
