# Silnia

Program obliczający silnię z liczby podanej przez użytkownika. Napisany jest napisany w języku C++ i obsługuje błędy wejściowe, takie jak liczby ujemne i zbyt duże wartości, aby uniknąć przepełnienia.

## Działanie

### Kroki Użycia

1. **Uruchom program**:
    - Skorzystaj z terminala, aby uruchomić skompilowany plik wykonywalny.

2. **Wprowadź liczbę**:
    - Program poprosi o wprowadzenie liczby. Wpisz liczbę i naciśnij Enter.

3. **Odczytaj wynik**:
    - Program wyświetli wynik obliczonej silnii.

### Obsługa Błędów

Program wyświetli komunikat o błędzie i zakończy swoje działanie, jeśli:
- Wprowadzisz nieprawidłową liczbę.
- Wprowadzisz liczbę ujemną.
- Wprowadzisz liczbę większą niż maksymalna dopuszczalna wartość, aby obliczyć silnię bez przepełnienia.

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
    cd SCI-INF/pinf/Factorial
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
    ./Factorial
    ```

2. **Postępuj zgodnie z instrukcjami wyświetlanymi na ekranie, aby wprowadzić liczbę.**
