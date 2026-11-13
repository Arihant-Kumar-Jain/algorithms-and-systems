# 🐉 Boss 8 · The Network Dragon

> Unlocks after clearing chapters **20, 21** · Reward **750 XP** · Fight: `./quest boss 8`

Final boss. A multi-client TCP chat server with Boost.Asio that you can connect to with `nc localhost 7777`.

## Win conditions
Tick a box (`- [x]`) only when it's genuinely done. Every tick takes a chunk off the boss's HP.

- [ ] Async accept / read / write; any number of clients; messages broadcast to everyone else
- [ ] `/nick <name>`, `/list` and `/quit` commands
- [ ] Program options: `--port`, `--max-clients`, `--log-file` (Boost.ProgramOptions)
- [ ] Graceful shutdown on Ctrl-C via `asio::signal_set`; all sessions are closed cleanly
- [ ] `io_context` runs on a pool of worker threads, with strands where needed
- [ ] Timestamped logging to a file
- [ ] Demo it with three `nc` clients in three terminals

## How the fight works
- `./quest boss 8` compiles every `.cpp` in this folder (except `tests/`) against Boost.
- The boss falls when **all** boxes are ticked **and** the build (plus any tests) passes.
- Run it by hand any time: `./quest run boss8 -- <args>`

## Battle notes
<!-- Design decisions, what was hard, what you'd do differently. -->
