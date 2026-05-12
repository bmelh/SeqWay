# SeqWay

SeqWay is a C command-line sequence analysis tool for basic **DNA/RNA/protein-related** operations, currently focused on an interactive **DNA workflow**.

The compiled executable name is:

- `seq_analyser`

---

## Features

Based on the current implementation, SeqWay provides these DNA menu operations:

1. Print DNA base composition and ratios  
2. Print complementary DNA chain  
3. Convert DNA main chain to RNA  
4. Convert DNA complementary chain to RNA  
5. Compute GC ratio in a window (strict highest GC ratio utility)  
6. Find first occurrence of a target sequence  
7. Find all occurrences of a target sequence  
8. Find first occurrence using Hamming-style matching  

---

## Project Structure

```text
SeqWay/
├── main.c
├── main_menu.c
├── parsing.c
├── displayers.c
├── COMMON_utils.c
├── ERROR_handler.c
├── HAMMING_utils.c
├── HUMMING_utils.c
├── seq_lib.h
├── Makefile
├── DNA/
│   ├── DNA_menu.c
│   ├── DNA_complementary_chain.c
│   ├── DNA_seq_composition.c
│   └── DNA_utils.c
├── RNA/
│   ├── RNA_menu.c
│   ├── RNA_seq_composition.c
│   ├── RNA_utils.c
│   ├── RNA_main_chain_converter.c
│   └── RNA_complementary_chain_converter.c
└── PROT/
    ├── PROT_seq_composition.c
    └── PROT_utils.c
```

---

## Build

From the `SeqWay` directory:

```bash
make
```

This builds:

```bash
./seq_analyser
```

### Available Make targets

- `make` : build executable
- `make clean` : remove object files
- `make fclean` : remove objects + executable
- `make re` : full rebuild

---

## Usage

Run with exactly one sequence argument:

```bash
./seq_analyser "ACTGACTGACTG"
```

If the argument count is wrong, program prints:

```text
Argument error
```

---

## Interactive Flow

After launch, current main menu exposes DNA mode:

- `1 : DNA`

Inside DNA menu, choose one of the listed actions (0 to 7 currently handled in switch cases).

Example session:

```text
Selection :
1 : DNA
```

then:

```text
Selection :
0 : Print DNA Composition
1 : Print DNA complementary chain
2 : Print RNA of Main chain
3 : Print RNA of complementary chain
4 : GC Raio Within N window
5 : Find first occurence of target sequence
6 : Find all occurences of target sequence
7 : Find first occurence of target sequence with Hamming Method
8 : Find all occurences of target sequence with Hamming Method
```

---

## Input Expectations

- Input sequence should match the expected alphabet for the selected flow.
- DNA checks are performed through parser/utility functions (e.g. `DNA_sequence_checker`).
- Invalid menu values are handled with fallback messages such as:
  - `Not an option.`
  - `Please enter a valid value`

---

## Current Limitations

1. **Main menu currently routes only to DNA path** in `main_menu.c`.
2. `main.c` runs `main_menu` inside an infinite loop (`while(1)`), so program does not naturally exit.
3. There are naming/text inconsistencies in code and messages (e.g., `HAMMING`/`HUMMING`, typo in printed labels).
4. DNA menu prints option `8`, but switch handling may not fully implement all printed options depending on source state.

---

## Troubleshooting

### Build fails
- Ensure a C compiler is installed (`cc` is used in Makefile).
- Rebuild from scratch:
  ```bash
  make fclean && make
  ```

### Program says `Argument error`
- Run with exactly one sequence argument:
  ```bash
  ./seq_analyser "ACTG"
  ```

### Unexpected menu behavior
- Enter numeric values only for menu prompts.
- Some displayed options may be partially implemented.

---

## Future Improvements

- Add complete RNA and protein flows to main menu.
- Add clean exit option from menus/infinite loop.
- Normalize naming (`Hamming`) and user-facing message typos.
- Add automated tests for parser and sequence utilities.
- Add non-interactive CLI flags for scripting use.
