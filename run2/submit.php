<DOCTYPE html>
<html>
<head>
	<title> This is Run2 submit</title>
	<meta charset="utf-8"/>
	<style>
	</style>
</head>


<body>
	
<?php
	
	$hostname="localhost";
	$username="root";
	$password="";
	$dbname="testdb";
	$conn=new mysqli($hostname,$username,$password,$dbname);
	
	$name=$_POST['name'];
	$roll=$_POST['roll'];
	$dept=$_POST['dept'];
	$year=$_POST['year'];
	
	$sql= "INSERT INTO run2(Name, Roll, Dept, Year) VALUES 
	('$name','$roll','$dept','$year')";
	if($conn->query($sql) == true){
		echo "<h2> submit successfull</h2>" ;
	}
	else {
		echo "<h2> Unsuccessfull</h2>";
	}
	
	$conn->close();
?>

</body>

</html>