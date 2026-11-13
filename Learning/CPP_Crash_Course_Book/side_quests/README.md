# 🗺️ Side Quests

Optional books that sit alongside C++ Crash Course. They earn XP and count as study days for your streak,
but they never block chapter clears or bosses. Pick one up when it fits what you're working on.

| Key | Book | Quests | Labs | Reward | Pairs with |
|---|---|---|---|---|---|
| `dbg` | [The Art of Debugging with GDB, DDD, and Eclipse](art_of_debugging/notes.md) · Norman Matloff & Peter Jay Salzman (2008) | 35 (+5 optional) | 5 | 300 XP | Chapter 1 (Debugging), then any time an exercise crashes. Chapter 5 of this book pairs with Crash Course chapter 19 (threads) |
| `make` | [The GNU Make Book](gnu_make/notes.md) · John Graham-Cumming (2015) | 32 (+5 optional) | 6 | 300 XP | Chapter 8 (translation units and headers) and chapter 21 (Special Topics in Compilation) |
| `prag` | [The Pragmatic Programmer, 20th Anniversary Edition](pragmatic_programmer/notes.md) · David Thomas & Andrew Hunt (2019) | 61 (+0 optional) | 7 | 400 XP | Any time. One Topic per study day is a good pace, and the exercises have answers in Appendix A2 |
| `gpg` | [PGP & GPG: Email for the Practical Paranoid](pgp_gpg/notes.md) · Michael W. Lucas (2006) | 16 (+9 optional) | 5 | 200 XP | Standalone. A good break from C++, and the git-signing lab is useful straight away |

## How to play

```bash
./quest side            # all side books + progress
./quest side dbg        # one book: its quests, page ranges and labs
./quest read dbg        # mark the next quest in that book as read
./quest done dbg-1 "what happened"   # claim a lab
./quest pdf dbg         # open the book
```
