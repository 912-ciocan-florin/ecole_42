#!/usr/bin/php
<?php
function ft_split($str)
{
	$parts = preg_split('/[\s,]+/', $str);
	return $parts;
}

	$provizoriu = ft_split($argv[1]);
	$str = "";
	$i = 0;
	$x = 1;
	while(!is_null($provizoriu[$i]))
	{
		$str .= $provizoriu[$i];
		if(!is_null($provizoriu[$x]))
			$str .= " ";
		$i++;
		$x++;
	}
	echo trim($str)."\n";

?>