#include<iostream>
using namespace std;
void doubleValue(int a) 
{
    a = a * 2;
}
int main() {
    int a = 8;
    doubleValue(a);
    cout << a;
}
// 8
/*
Why	do	we	need	function?
• Reusability:	Once	a	function	is	defined,	it	can	be	used	over	and	over	
again.	You	can	call	the	function	as	many	time	as	it	is	needed,	which	
saves	work.	Consider	that	you	are	required	to	find	out	the	area	of	the	
circle,	now	either	you	can	apply	the	formula	every	time	to get	the	area
of	circle	or	you	can	make	a	function	for	finding	area	of	the	circle	and	
invoke	the	function	whenever	it	is	needed.
• Neat	code:	A	code	created	with	function	is	easy	to	read	and	dry	run. You	
don’t	need	to	type	the	same statements	over	and	over	again,	instead	
you	can	invoke	the	function whenever	needed.
• Modularisation	– Functions help	in	modularising	code.	Modularisation	
means	to	divides	the	code	in	small	modules	each	performing	specific	
task.	Functions	helps	in	doing	so	as	they	are	the	small	fragments	of	the	
programme designed	to perform	the	specified	task.
• Easy	Debugging: It	is	easy	to	find	and	correct	the	error	in	function	as	
compared	to	raw	code	without	function	where	you	must	correct	the	
error	(if	there	is	any)	everywhere	the	specific	task	of	the	function	is	
performed.*/