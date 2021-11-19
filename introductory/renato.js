var Tablero = [
['*','*','*','*','*','*'],
['*',' ',' ',' ',' ','*'],
['*','*','*','*',' ','*'],
['*',' ',' ',' ',' ','*'],
['*',' ','*','*','*','*'],
['*',' ',' ',' ',' ','*'],
['*','*','*','*','*','*']];


var vidas = 3
var tiempo = 5 * 60
var x = 3
var y = 1
var pacman = 'ᗧ'

function dibujarTitulo()
{
    var titulo = 'Vidas: '
    titulo = titulo + '❤️'.repeat(vidas) + '\t'
    titulo = titulo + '⏳' + tiempo + '\t'
    console.log(titulo)
    console.log('-'.repeat(10))
}

function dibujarTablero()
{
    var filas = 7
    var columnas = 6
    var linea = ''
    Tablero[x][y] = pacman
    for(var i=0; i<filas; ++i){
        linea = ''
        for(var j=0; j<columnas; ++j)
            linea = linea + Tablero[i][j]
        console.log(linea)
    }
}

function dibujar()
{
    dibujarTitulo()
    dibujarTablero()
}

function subir(){
    x = x - 1
}
function bajar(){
    x = x + 1
}
function izquierda(){
    y = y - 1
}
function derecha(){
    y = y + 1
}

function iniciarPacman(pos_x, pos_y) {
    x = pos_x
    y = pos_y
}

function ganarVida(){
    vidas = vidas + 1
}

function pasar1segundo(){
    tiempo = tiempo - 1
}

/* GAME LOOP */


iniciarPacman(5,4)

izquierda()
izquierda()
izquierda()
subir()
subir()
derecha()
derecha()
derecha()
subir()
subir()
izquierda()
izquierda()
izquierda()

ganarVida()

pasar1segundo()

dibujar()

/* El resultado despues de ejecutar se ve asi:

Vidas: ❤️❤️❤️❤️	⏳299	
----------
******
*ᗧ   *
**** *
*    *
* ****
*    *
******

*/