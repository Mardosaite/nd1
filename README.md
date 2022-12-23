# namų darbai
ND
0.1 V
0.1 versijoje pirmiausia suskaičiuojama mediana. Tada sugeneruojami random skaičiai nuo 1-10, kadangi jų reikės norint automatiškai įvesti pažymius. Toliau funkcija automatiškai suveda pažymius ir egzamino pažymį arba leidžia pačiam vartotojui juos įvesti. Sekanti funkcija leidžia įvesti studento vardą ir pavardę. Galiausiai atspausdinami rezultatai.

0.2 V
Antroje versijoje yra nuskaitomas failas ir suskaiciuojami galutiniai pazymiai bei viskas tvarkingai isvedama faile "rezultatai.txt".

0.3 V
Šioje versijoje funkcijos yra išskirstytos į h ir cpp failus. Taip pat kai yra nuskaitoma iš failo, įdėtas exception, kad kiekvieną kartą tikrintų ar gerai įvestas failo pavadinimas. Jei ne, išmetama "Neteisingas failo pavadinimas", taip žinome kur palikome klaidą. Pati programa nuskaito duomenis iš studentai100000.txt failo ir sukuria nauja txt faila "rezultatai.txt', kuriame gražiai pagal vardus ir pavardes surūšiuoja studentus bei apskaičiuoja jų GP ir medianą.

0.4 V
Pirmiausia programa paprašo įvesti studentų skaičių. Kai skaičius yra įvedamas, tada sukuriamas txt failas su tiek studentų (vardas, pavardė ir random suskaičiuotas GP). Toliau tas sukurtas failas yra nuskaitomas. Kai failas yra nuskaitytas tada studentai yra suskirstomi į dvi kategorijas- protingi ir vargšiukai. Toliau studentus suskirstytus į dvi katerogijas sudeda i du naujus txt failus. Taip pat programoje atlikta greičio analizė: failų kūrimas; duomenų nuskaitymas iš failų; studentų rūšiavimas į dvi grupes/kategorijas; surūšiuotų studentų išvedimas į du naujus failus.
V1.1
Šioje versijoje sukuriama "Studentas" klasė. Atlikta spartos analizė lyginant struct ir class veikimą.

<img width="518" alt="image" src="https://user-images.githubusercontent.com/112689078/209298519-7bef4e17-3c37-4364-83e1-8c26ad3e996f.png">

Spartos analizė priklausomai nuo kompiliatoriaus optimizavimo lygio:

1 000 000		
flag'as	nuskaitymas	rušiavimas	išvedimas
O1	73.0281s	14.9365s	26.4519s
O2	73.7592s	14.151s	26.6388s
O3	73.4099s	14.0969s	27.2403s
