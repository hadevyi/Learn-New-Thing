/*
04. float height=177.7;과 같이 선언하면 경고 메시지가 나타난다.
	경고 메시지가 나타나는 이유와 해결방법을 적으시오.

177.7은 8바이트이다. 즉 double로 처리되는데 float의 자료형으로 되었으므로 경고 메시지가 나타나는 것이다.
float height=177.7F의 방식으로 float 표기법을 따르면 이 오류는 해결된다.
*/