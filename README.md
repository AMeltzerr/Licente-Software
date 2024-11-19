Licența Microsoft Office
Managementul(alocare, revocare și monitorizare) eficient al licențelor




















Student: Meltzer Alexandra Marina 
Specializarea: Calculatoare Romana 
Grupa: 2.2B
An: 2024-2025





INTRODUCERE:
       În contextul dezvoltării și utilizării pe scară largă a aplicațiilor Microsoft Office, gestionarea licențelor a devenit  componenta esențială pentru organizațiile care depind de aceste resurse. În lipsa unui sistem bine structurat, organizațiile pot intampina dificultati în gestionarea numărului de licențe disponibile, respectarea termenilor de licențe și monitorizarea utilizarii acesteia. Proiectul de fata is propune sa dezvolte o aplicație orientată pe obiecte care sa faciliteze managementul eficient al licențelor software prin funcții de alocare, revocare și monitorizare.


Ce oferă acest proiect:

1. Cereri de licență
Utilizatorii solicită licențe printr-un formular, specificând tipul de licență necesar și justificarea. Cererea este verificată de sistem și trimisă către administrator pentru aprobare, în funcție de disponibilitate și priorități.
2. Alocarea licențelor
După aprobare, sistemul alocă o licență din stoc, setând o durată de utilizare și generând un cod de activare, dacă este necesar. Utilizatorul primește instrucțiuni pentru activarea licenței.
3. Revocarea licențelor
Licențele neutilizate sau expirate sunt identificate și revocate, apoi reintroduse în stoc pentru a putea fi redistribuite. Utilizatorii și administratorii sunt notificați de orice modificare.
4. Monitorizarea licențelor
Sistemul afișează numărul de licențe disponibile și alocate, monitorizează durata lor de valabilitate și generează rapoarte de utilizare. Notificările automate ajută la gestionarea stocului și a licențelor care urmează să expire.
Această aplicație asigură gestionarea eficientă a licențelor Microsoft Office, optimizând resursele și prevenind risipa.

Date de intrare:
Alocare Licenta:
ID Licenta (int)
Nume Utilizator (string)
Data Alocarii (DateTime)


Revocare Licenta:
ID Licenta (int)
Nume Utilizator (string)
Data Alocarii (DateTime)

Monitorizare Licențe: 
Filtru (string) – ex. "active", "revocate"
Interval de timp (DateTime start, DateTime end)



4. Date de ieșire: 

Rapoarte Alocari: 
Lista utilizatorilor și licențelor alocate, incluzând:
ID Licenta 
Nume Utilizator 
Data Alocarii 

Rapoarte Revocari:
Lista utilizatorilor și licențelor revocate, incluzând:
ID Licenta 
Nume Utilizator 
Data Revocării
Status Licențe:
Numărul total de licență
Numărul de licențe active și revocate
Detalii despre fiecare licență (ex. nume, tip, status)




