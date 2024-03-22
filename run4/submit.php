<DOCTYPE html>
<html>
<head>
	<title>Run4</title>

</head>
<body>
	<?php
		$hostname= "localhost";
		$username="root";
		$pass="";
		$dbname="testdb";
		$conn= new mysqli($hostname,$username,$pass,$dbname);
		
		$name = $_POST['name'];
		$roll = $_POST['roll'];
		$dept= $_POST['dept'];
		$sql= "INSERT INTO run3(Name,Roll,Dept) VALUES ('$name','$roll','$dept')";
		if($conn-> query($sql) == true)
		{
			echo "<h2>Success</h2>";
		}
		else{
			echo "<h2>Failed</h2>";
		}
		$conn->close();
	?>

</body>
</html>