#!/usr/bin/env bash
set -euo pipefail
ROOT="$(cd "$(dirname "$0")" && pwd)"
mkdir -p "$ROOT/build"
cd "$ROOT/build"
cmake ..
cmake --build .
exec "$ROOT/build/factorial"
