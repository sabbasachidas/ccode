<doctype html>
<html>
<head>
<title>My run before icb lab test</title>
<meta charset="utf-8"/>
<style> </style>

</head>
<body>
	<?php
		$host= "localhost";
		&username="root";
		$password="";
		$dbname="testdb";
		$conn= new mysqli($host,$username,$password,$dbname);
		
		$name= $_POST['name'];
		$roll= $_POST['roll'];
		$dept= $_POST['dept'];
		$sql= "INSERT INTO run3('Name,'Roll','Dept') VALUES ('$name','$roll','$dept')";
		if($conn-> query($sql) == TRUE){
			echo "<h2>Success</h2>";
		}
		else {
			echo "<h2>Failed</h2>";
		}
		$conn->close();
		
	?>
</body>
</html