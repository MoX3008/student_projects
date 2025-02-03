# Gra: "Saper" (uproszczony)

### 1. Rozmiar planszy
- **Rozmiar:** 3x3
- **Ilość Bomb:** 2

## Start: 
Po starcie program losowo wypełnia planszę 2 bombami:
- **1:** pole z bombą
- **0:** pole bez bomby

## Gra
Użytkownik przystępuje do szukania pól bez bomby, podając współrzędne (x, y). Przykładowa plansza po starcie:
```python

  1  2  3
1 0  0  0
2 0  1  0
3 0  0  1
```

Jeśli trafił pole bez bomby to rysujemy plansze w taki sposób
```python

  1  2  3
1 ?  V  ?
2 ?  ?  ? 
3 ?  ?  ?
```
- **V** - pole odkryte bez bomby
- **?** - pole nieodkryte

## Zasady:
- Gra kończy się, gdy użytkownik trafi na bombę.
- Użytkownik wygrywa, gdy odkryje wszystkie pola bez bomb.
