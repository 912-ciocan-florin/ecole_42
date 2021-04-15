#!/usr/bin/php
<?php
function ft_split($str)
{
	$rez = array_filter(explode(" ", $str));
	sort($rez);
	return $rez;
}
if($argc != 1)
{
	$e = array();
	foreach ($argv as $av) 
	{
		if($av != $argv[0])
			$e = array_merge(ft_split($av), $e);
	}
	foreach ($e as $av) 
	{
		if(is_numeric($av))
			$numeric[] = $av;
	}
	if($numeric)
		sort($numeric, SORT_STRING);
	foreach($e as $av)
	{
		if(ctype_alpha($av) == TRUE)
			$alpha[] = $av;
	}
	if($alpha)
		natcasesort($alpha);
	foreach($e as $av)
	{
		if(!is_numeric($av) && !ctype_alpha($av))
			$ascii[] = $av;
	}
	if($ascii)
		sort($ascii);
	if($alpha)
	{
		foreach($alpha as $av)
		{
			echo $av;
			echo "\n";
		}
	}
	if ($numeric)
	{
		foreach($numeric as $av)
		{
			echo $av;
			echo "\n";
		}
	}	
	if ($ascii)
	{
		foreach($ascii as $av)
		{
			echo $av;
			echo "\n";
		}
	}
}
?>