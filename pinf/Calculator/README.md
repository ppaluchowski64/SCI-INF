# Kalkulator

Prosty kalkulator napisany w języku C++, który wykonuje podstawowe operacje arytmetyczne, takie jak dodawanie, odejmowanie, mnożenie, dzielenie oraz modulo. Program sprawdza poprawność wprowadzonych danych i obsługuje błędy, takie jak nieprawidłowe dane wejściowe, dzielenie przez zero czy nieprawidłowy znak operacji.

## Działanie

### Kroki Użycia

1. **Uruchom program**:
    - Skorzystaj z terminala, aby uruchomić skompilowany plik wykonywalny.

2. **Wprowadź pierwszą liczbę**:
    - Program poprosi o wprowadzenie pierwszej liczby. Wpisz liczbę i naciśnij Enter.

3. **Wybierz operację**:
    - Program poprosi o wprowadzenie znaku operacji. Możliwe operacje to:
        - `+` (dodawanie)
        - `-` (odejmowanie)
        - `*` (mnożenie)
        - `/` (dzielenie)
        - `%` (reszta z dzielenia)

4. **Wprowadź drugą liczbę**:
    - Program poprosi o wprowadzenie drugiej liczby. Wpisz liczbę i naciśnij Enter.

5. **Odczytaj wynik**:
    - Program wyświetli wynik operacji.

### Obsługa Błędów

Program wyświetli komunikat o błędzie i zakończy jego działanie, jeśli:
- Wprowadzisz nieprawidłową liczbę.
- Wprowadzisz nieprawidłowy znak operacji.
- Spróbujesz podzielić przez zero.

## Budowa

### Wymagania

- Kompilator C++ (np. g++)
- CMake (wersja 3.28 lub nowsza)

### Etapy

Aby zbudować projekt, wykonaj poniższe kroki:

1. **Sklonuj repozytorium**:
    ```bash
    git clone https://github.com/ppaluchowski64/SCI-INF.git
    ```

2. **Przejdź do katalogu projektu**:
    ```bash
    cd SCI-INF/pinf/Calculator
    ```

3. **Utwórz katalog `build` i przejdź do niego**:
    ```bash
    mkdir build
    cd build
    ```

4. **Zbuduj projekt za pomocą CMake**:
    ```bash
    cmake ..
    make
    ```

### Uruchomienie

Aby uruchomić skompilowany plik wykonywalny, wykonaj poniższe kroki:

1. **Uruchom program**:
    ```bash
    ./Calculator
    ```

2. **Postępuj zgodnie z instrukcjami wyświetlanymi na ekranie, aby wprowadzić liczby i wybrać operację.**
