# ⚔️ C++ Crash Course: The Quest

A playthrough of **C++ Crash Course** by Josh Lospinoso (No Starch, 2019) set up as a game.
Read sections, do the exercises, beat boss projects, earn XP, level up, and keep a streak going.
Run one command to see where you are:

```bash
./quest
```

That's the whole interface. The dashboard always shows your level, streak, today's goal, and the
**exact next thing to do**, so you never have to decide where to pick up.

---

## 🚀 Quick start

1. `./quest` shows the dashboard (run it from this folder)
2. `./quest start` starts a focus timer
3. Open the PDF (`./quest pdf`) and read the first quest. Jot notes in `ch01_up_and_running/notes.md`.
4. `./quest read` marks it done (+XP)
5. Write exercise code in `ch01_up_and_running/exercises/`. Every file starts empty, and `./quest ch 1`
   shows each exercise's task. `./quest run 1-1` builds and runs it, `./quest done 1-1` checks it
   compiles and claims the XP.
6. `./quest stop "what clicked today"` stops the timer and writes a summary to `journal.md`

Optional: make `quest` work from anywhere by adding this to `~/.zshrc`:

```bash
alias quest="$HOME/Desktop/Coding/c++/Learning/CPP_Crash_Course_Book/quest"
```

---

## 🗂️ Folder map

```
CPP_Crash_Course_Book/
├── README.md              ← you are here
├── quest                  ← the game (Python 3, standard library only)
├── PROGRESS.md            ← auto-generated scoreboard: map, badges, heatmap, recent activity
├── journal.md             ← your study log (sessions, notes, milestones)
├── cheatsheet.md          ← (empty) one living page of things you keep looking up
├── chNN_<topic>/          ← one folder per chapter (ch00 = optional prologue for C programmers)
│   ├── notes.md           ← (empty) your notes, your structure
│   ├── listings/          ← type the book's listings here (listing_2-9.cpp); experiments welcome
│   └── exercises/         ← one empty .cpp per exercise; ids match the book (2-1, 2-2 ...)
├── projects/              ← 🐉 8 boss fights: bigger projects that combine several chapters
│   └── bossN_<name>/      ← README.md (spec + win-condition checkboxes) + empty main.cpp
├── side_quests/           ← 🗺️ 4 optional books, each with its PDF, an empty notes.md, and lab/ where needed
└── .quest/                ← game data: book.json (levels), save.json (your progress)
```

Every `.cpp` and `notes.md` starts completely empty. The tasks live in the game, not in the files:
`./quest ch 2` lists each exercise's task, and `./quest side dbg` does the same for a side book.

Exercises that build one program step by step share a file. For example, 2-1 → 2-4 all live in
`02-01_calculator.cpp`. Exercises with several files (8-1, 21-4) get a folder, and every `.cpp`
in it is compiled together.

---

## 🔁 The study loop (per chapter)

1. **Read** one quest at a time (each is 2–10 pages). The page range is shown in `./quest ch <n>`.
2. **Type the listings** into `listings/` and run them: `./quest run ch02_types/listings/listing_2-9.cpp`.
   Typing them out beats copy-pasting. Break them on purpose and read the compiler errors.
3. **Write notes in your own words** in the chapter's `notes.md`, structured however you like.
   After 10+ lines you get a 📜 notes bonus for the chapter.
4. **Do the exercises** at the end of the chapter (`./quest ch <n>` shows the tasks). `done` won't award
   XP for an empty file or code that doesn't compile. Warning-free builds earn a ✨ bonus.
5. **Write 3–5 flashcards** anywhere in `notes.md`, in this format (blank line between cards).
   `./quest review` finds them and brings back the ones you miss more often:
   ```
   Q: What does RAII stand for?
   A: Resource Acquisition Is Initialization
   ```
6. **Fight the boss** when its chapters are cleared.

Companion code from the author: <https://github.com/JLospinoso/ccc>. Check it *after* your own attempt.

---

## 🎮 Rules of the game

### XP

| Action | XP |
|---|---|
| 📖 Reading quest | 5 + 3 per page (max 35) |
| ⚔️ Code exercise ★ / ★★ / ★★★ | 30 / 50 / 80 |
| ✨ Builds with **zero warnings** (`-Wall -Wextra`) | +10 (re-run `done` after fixing warnings to claim it) |
| 📚 Reading / research / debugger exercises | 15 |
| 🏁 Chapter cleared (all reading + required exercises) | 100 |
| 🏰 Part I / Part II complete | 500 / 1000 |
| 🐉 Boss defeated | 300–750 |
| ⏱️ Focus session (`start` → `stop`) | 1 per minute, 10–90 per session |
| ♻️ Flashcard answered correctly | 2 (max 20/day) |
| 📜 Notes bonus (10+ real lines in a chapter's notes.md) | 30 |
| 🔥 Streak bonus (once per study day) | 3 × streak length (max 30) |
| 🎯 Daily goal hit (100 XP by default, `./quest goal 150` to change) | 25 |
| 🗺️ Side-quest reading / lab (★ / ★★ / ★★★) | same as above / 30 / 50 / 80 |
| 📗 Side-quest book finished | 200–400 |
| 🏅 Badge unlocked (29 to find) | 25 |

### Levels
20 named ranks follow the book's arc, from **Hello, World** through **Pointer Wrangler**,
**Template Tinkerer**, **Smart Pointer Sage** and **Concurrency Conjurer** to
**Crash Course Conqueror**. They're spaced so the final rank lands around the end of the book
if you keep steady habits.

### 🔥 Streaks and freezes, so one bad day doesn't end everything
- Any XP-earning action counts as studying that day. One reading quest (~15 minutes) keeps the streak.
- Every 7 streak days banks a ❄️ **freeze** (hold up to 2). A freeze automatically covers a missed day.
- Broke it anyway? Coming back after 7+ days earns the 🔄 **Comeback Kid** badge.

### 🐉 Bosses
| # | Boss | After chapters | Build |
|---|---|---|---|
| 1 | The Lifetime Lich: `DynArray` with RAII + copy/move | 2–4 | ASan + UBSan, self-test |
| 2 | The Operator Overlord: `Rational<T>` + concepts + literals | 5–7 | ASan + UBSan, self-test |
| 3 | The Core Colossus: `rpn` calculator (Part I finale) | 8–9 | ASan + UBSan, `--test` |
| 4 | The Test Golem: test-driven bank ledger | 10–12 | ASan + UBSan, test suite |
| 5 | The Container Kraken: `kvdb` key-value store | 13–15 | ASan + UBSan, stdin/stdout tests |
| 6 | The Filesystem Phantom: `dupes` duplicate finder | 16–17 | build |
| 7 | The Parallel Wraith: `wordstorm` thread pool | 18–19 | ThreadSanitizer |
| 8 | The Network Dragon: Boost.Asio chat server | 20–21 | Boost |

Each boss's HP is the number of unticked win conditions in its README. Tick them (`- [x]`) as you
finish them; the boss falls when every box is ticked **and** the build and tests pass.

### 🗺️ Side quests (optional books)
Four extra books live in `side_quests/`. They earn XP and keep your streak alive, but never block a
chapter clear or a boss. The dashboard suggests one when it fits the chapter you're on.

| Key | Book | Quests | Labs | Best paired with |
|---|---|---|---|---|
| `dbg` | The Art of Debugging with GDB, DDD, and Eclipse | 35 (+5 optional) | 5 | Ch 1, then whenever something crashes. Use **LLDB** on your Mac; GDB doesn't run on Apple silicon |
| `make` | The GNU Make Book | 32 (+5 optional) | 6 | Ch 8 and ch 21 |
| `prag` | The Pragmatic Programmer (20th Anniv.) | 61 (one per Topic) | 7 | Any time, one Topic per study day |
| `gpg` | PGP & GPG: Email for the Practical Paranoid | 16 (+9 optional) | 5 | Standalone. The commercial-PGP and 2006 mail-client chapters are optional |

Labs are hands-on tasks tied to your C++ work: debugging your own exercises in LLDB, writing a Makefile
for this folder, adding contracts to your boss code, signing your git commits with GPG, and so on.
`./quest side <key>` lists them. There's no compile check for labs, so it's on your honour.

---

## 🧰 Commands

```
./quest                       dashboard + next steps
./quest start / stop ["note"] focus timer (stop -m 45 fixes a forgotten timer)
./quest read [2.3|2|2.all]    mark reading done (no argument = the next one)
./quest run <id|bossN|file.cpp> [--asan|--tsan] [-- args]
./quest done <id> ["note"]    compile-check + claim (--force skips the check, no ✨ bonus)
./quest ch [n] · map · boss [n] · badges · stats
./quest side [key]            side books / one book's quests + labs
./quest read dbg | dbg.2 | dbg.2.3   next quest in a side book / its chapter / one quest
./quest done dbg-1 ["note"]   claim a side lab · ./quest pdf dbg opens that book
./quest review [n] [ch3]      flashcards
./quest log "text"            add a line to journal.md
./quest undo [id]             take back the last action (everything is recomputed, so it's safe)
./quest pdf · goal <xp> · init · help
```

Every build uses `clang++ -std=c++20 -Wall -Wextra -g` and outputs to `.build/` (git-ignored).
A source file can add its own flags with a comment line, for example to link a Boost library:

```cpp
// quest-flags: -lboost_program_options
```

---

## 🛠️ Setup notes

- **Compiler:** Apple clang via the Xcode command-line tools (`xcode-select --install` if missing).
- **Boost** (used in chapters 12–13, 15–16, 20–21 and Boss 8): `brew install boost`.
  Homebrew's headers are picked up automatically.
- **Testing frameworks** (Chapter 10): the exercises work with the book's hand-rolled `assert_that` /
  `run_test` approach. To try Catch2 or GoogleTest: `brew install catch2 googletest`, then link with
  `// quest-flags: -lCatch2Main -lCatch2` or `// quest-flags: -lgtest -lgtest_main`.
- **Chapter 18** has no exercises in the book, so it has three bonus quests (marked as such).
- **13-4** repeats 13-1 in the print edition; here it's a from-memory redo.
- If a file gets deleted, `./quest init` recreates anything missing (empty) and never overwrites your files.

---

## 💡 How not to quit

- **Shrink the day, keep the streak.** A tired evening's minimum is one reading quest.
- **Always end a session by running `./quest`.** Tomorrow's first step is then already on screen.
- **Stuck on an exercise for 30+ minutes?** Note it in `notes.md` under *Questions to revisit*, then move on.
  Reading ahead counts, and you can come back.
- **Look at `PROGRESS.md` once a week.** The heatmap shows your consistency.
