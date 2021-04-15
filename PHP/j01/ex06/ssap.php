#!/usr/bin/php
<?php
if ($argc > 1)
{
	unset($argv[0]);
	$str = "";
	foreach($argv as $elem)
		$str .= $elem." ";
	$new = array_filter(explode(" ", $str));
	sort($new);
	foreach($new as $ve)
		echo trim($ve)."\n";
}
?>