function I(name){return document.getElementById(name);}

document.addEventListener('keydown', keypress);
document.addEventListener('keyup', keyunpress);
function keypress(e)
{
	if(e.key == 'a'){press(0, 0, 2);}
	if(e.key == 'z'){press(0, 1, 2);}
	if(e.key == 'q'){press(1, 0, 2);}
	if(e.key == 's'){press(1, 1, 2);}
}
function keyunpress(e)
{
	if(e.key == 'a'){unpress(0, 0, 2);}
	if(e.key == 'z'){unpress(0, 1, 2);}
	if(e.key == 'q'){unpress(1, 0, 2);}
	if(e.key == 's'){unpress(1, 1, 2);}
}