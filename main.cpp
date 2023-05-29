{
  "tests": [
    {
     "name": "Test 1 - Datos de entrada: 1",
     "setup": "g++ -g -o main main.cpp Video.cpp Serie.cpp Pelicula.cpp Episodio.cpp Poliformismo.cpp",
     "run": "./main",
     "input": "1",
     "output": "Programacion\n500\n100\nTigres_Rayados 90 100\nTigres_Campeones 90 100\n0002 POO 500 Programacion 100.000000 2\nTigres_Rayados 90 100\nTigres_Campeones 90 100\n",
     "comparison": "included",
     "timeout": 2,
     "points": 25
   },
   {
     "name": "Test 2 - - Datos de entrada: 2",
     "setup": "g++ -g -o main main.cpp Video.cpp Serie.cpp Pelicula.cpp Episodio.cpp Poliformismo.cpp",
     "run": "./main",
     "input": "2",
     "output": "CDV=0000 TC1030 10 Computación 100.000000\nCDP=0000 TC1030 10 Computación 100.000000 100\nCDS=0000 TC1030 10 Computación 100.000000 0\n",
     "comparison": "included",
     "timeout": 2,
     "points": 25
   },
   {
     "name": "Test 3 - datos de entrada: 3   1   100 ",
     "setup": "g++ -g -o main main.cpp Video.cpp Serie.cpp Pelicula.cpp Episodio.cpp Poliformismo.cpp",
     "run": "./main",
     "input": "3 1 100",
     "output": "0 100 P1 100 A 100.000000 1\n1 101 P2 200 A 100.000000 2\n2 102 P3 100 A 95.000000 3\n3 103 P4 200 P 99.000000 4\n4 104 P5 100 P 110.000000 5\n5 105 P6 200 P 120.000000 6\n6 106 P7 200 A 100.000000 7\n7 107 P8 200 A 100.000000 8\n8 108 P9 200 A 95.000000 9\n9 109 P10 200 P 150.000000 10\n100 P1 100 A 100.000000 1\n101 P2 200 A 100.000000 2\n106 P7 200 A 100.000000 7\n107 P8 200 A 100.000000 8\ntotal = 4\n",
     "comparison": "included",
     "timeout": 2,
     "points": 25
   },
 {
     "name": "Test 4 -datos de entrada: 3   2   A",
     "setup": "g++ -g -o main main.cpp Video.cpp Serie.cpp Pelicula.cpp Episodio.cpp Poliformismo.cpp",
     "run": "./main",
     "input": "3 2 A",
     "output": "0 100 P1 100 A 100.000000 1\n1 101 P2 200 A 100.000000 2\n2 102 P3 100 A 95.000000 3\n3 103 P4 200 P 99.000000 4\n4 104 P5 100 P 110.000000 5\n5 105 P6 200 P 120.000000 6\n6 106 P7 200 A 100.000000 7\n7 107 P8 200 A 100.000000 8\n8 108 P9 200 A 95.000000 9\n9 109 P10 200 P 150.000000 10\n100 P1 100 A 100.000000 1\n101 P2 200 A 100.000000 2\n102 P3 100 A 95.000000 3\n106 P7 200 A 100.000000 7\n107 P8 200 A 100.000000 8\n108 P9 200 A 95.000000 9\ntotal = 6\n",
      "comparison": "included",
   "timeout": 2,
     "points": 25
   }
  ]
}
