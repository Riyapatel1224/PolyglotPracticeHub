<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
	<form action="loginValidation" method="post">
		name: <input type="text" name="username"> <br>
		birthday: <input type="text" name="bd"> <br>
		<button type="submit">SUBMIT</button>
		${firstNameError}
	</form>
	
</body>
</html>