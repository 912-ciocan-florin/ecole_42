<?php
	function ft_is_sort($arr)
	{
		$foo = false;
		$arr2 = $arr;
		sort($arr2);
		if($arr === $arr2){
			$foo = true;
			return $foo;
		}
		else
			return $foo;
	}
?>