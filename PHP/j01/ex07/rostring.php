#!/usr/bin/php
<?php
	function ft_split($str)
	{
		$rez = array_filter(explode(" ", $str));
		return $rez;
	}
	if($argc > 0)
	{
		$arr = ft_split($argv[1]);
		$len = count($arr) - 1;
		$newArr = array();
		$i = 1;
		while(!is_null($arr[$i]))
		{
			$newArr[$i - 1] = $arr[$i];
			$i++;
		}
		$newArr[$len] = $arr[0];
	}
	$var = "";
	foreach ($newArr as $element)
		$var .= $element." ";
	echo trim($var."\n");
?>