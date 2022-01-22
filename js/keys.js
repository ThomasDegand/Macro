function press(i, j, N, link)
{
	id = String(N*i + j);
	ajout = String(i*84);
	I('text'+id).style.top = "calc(2px + "+ajout+"px)";
	I('macrotop'+id).style.top = "calc(12px + "+ajout+"px)";
	I('macroside'+id).style.top = "calc(27px + "+ajout+"px)";
	setTimeout(function(){
		window.open(link, '_blank');
	}, 200);
}
function unpress(i, j, N)
{
	id = String(N*i + j);
	ajout = String(i*84);
	I('text'+id).style.top = "calc(-8px + "+ajout+"px)";
	I('macrotop'+id).style.top = "calc(2px + "+ajout+"px)";
	I('macroside'+id).style.top = "calc(17px + "+ajout+"px)";
}