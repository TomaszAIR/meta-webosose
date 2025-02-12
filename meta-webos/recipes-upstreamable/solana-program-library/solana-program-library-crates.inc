# Autogenerated with 'bitbake -c update_crates solana-program-library'

# from ../../Cargo.lock
SRC_URI += " \
    crate://crates.io/Inflector/0.11.4 \
    crate://crates.io/adler/1.0.2 \
    crate://crates.io/aead/0.4.3 \
    crate://crates.io/aes/0.7.5 \
    crate://crates.io/aes-gcm-siv/0.10.3 \
    crate://crates.io/ahash/0.7.6 \
    crate://crates.io/aho-corasick/0.7.18 \
    crate://crates.io/aliasable/0.1.3 \
    crate://crates.io/alloc-no-stdlib/2.0.3 \
    crate://crates.io/alloc-stdlib/0.2.1 \
    crate://crates.io/ansi_term/0.12.1 \
    crate://crates.io/anyhow/1.0.58 \
    crate://crates.io/arbitrary/1.0.3 \
    crate://crates.io/arc-swap/1.5.0 \
    crate://crates.io/arrayref/0.3.6 \
    crate://crates.io/arrayvec/0.7.2 \
    crate://crates.io/ascii/0.9.3 \
    crate://crates.io/asn1-rs/0.5.1 \
    crate://crates.io/asn1-rs-derive/0.4.0 \
    crate://crates.io/asn1-rs-impl/0.1.0 \
    crate://crates.io/assert_cmd/2.0.4 \
    crate://crates.io/assert_matches/1.5.0 \
    crate://crates.io/async-compression/0.3.14 \
    crate://crates.io/async-mutex/1.4.0 \
    crate://crates.io/async-stream/0.3.3 \
    crate://crates.io/async-stream-impl/0.3.3 \
    crate://crates.io/async-trait/0.1.57 \
    crate://crates.io/atty/0.2.14 \
    crate://crates.io/autocfg/1.1.0 \
    crate://crates.io/autotools/0.2.5 \
    crate://crates.io/axum/0.5.1 \
    crate://crates.io/axum-core/0.2.8 \
    crate://crates.io/backoff/0.4.0 \
    crate://crates.io/base64/0.12.3 \
    crate://crates.io/base64/0.13.0 \
    crate://crates.io/base64ct/1.5.0 \
    crate://crates.io/bincode/1.3.3 \
    crate://crates.io/bindgen/0.60.1 \
    crate://crates.io/bit-set/0.5.2 \
    crate://crates.io/bit-vec/0.6.3 \
    crate://crates.io/bitflags/1.3.2 \
    crate://crates.io/bitmaps/2.1.0 \
    crate://crates.io/blake3/1.3.1 \
    crate://crates.io/block-buffer/0.7.3 \
    crate://crates.io/block-buffer/0.9.0 \
    crate://crates.io/block-buffer/0.10.2 \
    crate://crates.io/block-padding/0.1.5 \
    crate://crates.io/block-padding/0.2.1 \
    crate://crates.io/borsh/0.9.3 \
    crate://crates.io/borsh-derive/0.9.3 \
    crate://crates.io/borsh-derive-internal/0.9.3 \
    crate://crates.io/borsh-schema-derive-internal/0.9.3 \
    crate://crates.io/brotli/3.3.4 \
    crate://crates.io/brotli-decompressor/2.3.2 \
    crate://crates.io/bs58/0.4.0 \
    crate://crates.io/bstr/0.2.17 \
    crate://crates.io/bumpalo/3.8.0 \
    crate://crates.io/bv/0.11.1 \
    crate://crates.io/byte-tools/0.3.1 \
    crate://crates.io/bytemuck/1.12.1 \
    crate://crates.io/bytemuck_derive/1.2.1 \
    crate://crates.io/byteorder/1.4.3 \
    crate://crates.io/bytes/1.2.1 \
    crate://crates.io/bzip2/0.4.3 \
    crate://crates.io/bzip2-sys/0.1.11+1.0.8 \
    crate://crates.io/caps/0.5.3 \
    crate://crates.io/cbindgen/0.16.0 \
    crate://crates.io/cc/1.0.72 \
    crate://crates.io/cexpr/0.6.0 \
    crate://crates.io/cfg-if/0.1.10 \
    crate://crates.io/cfg-if/1.0.0 \
    crate://crates.io/chrono/0.4.19 \
    crate://crates.io/chrono-humanize/0.2.1 \
    crate://crates.io/cipher/0.3.0 \
    crate://crates.io/cipher/0.4.3 \
    crate://crates.io/clang-sys/1.3.1 \
    crate://crates.io/clap/2.34.0 \
    crate://crates.io/clap/3.2.17 \
    crate://crates.io/clap_lex/0.2.4 \
    crate://crates.io/combine/3.8.1 \
    crate://crates.io/console/0.14.1 \
    crate://crates.io/console/0.15.0 \
    crate://crates.io/console_error_panic_hook/0.1.7 \
    crate://crates.io/console_log/0.2.0 \
    crate://crates.io/const-oid/0.7.1 \
    crate://crates.io/constant_time_eq/0.1.5 \
    crate://crates.io/convert_case/0.4.0 \
    crate://crates.io/core-foundation/0.9.3 \
    crate://crates.io/core-foundation-sys/0.8.3 \
    crate://crates.io/core_affinity/0.5.10 \
    crate://crates.io/cpufeatures/0.2.1 \
    crate://crates.io/crc32fast/1.3.0 \
    crate://crates.io/crossbeam-channel/0.5.1 \
    crate://crates.io/crossbeam-deque/0.8.1 \
    crate://crates.io/crossbeam-epoch/0.9.5 \
    crate://crates.io/crossbeam-utils/0.8.5 \
    crate://crates.io/crunchy/0.2.2 \
    crate://crates.io/crypto-common/0.1.3 \
    crate://crates.io/crypto-mac/0.8.0 \
    crate://crates.io/ctr/0.8.0 \
    crate://crates.io/curve25519-dalek/3.2.1 \
    crate://crates.io/darling/0.13.4 \
    crate://crates.io/darling_core/0.13.4 \
    crate://crates.io/darling_macro/0.13.4 \
    crate://crates.io/dashmap/4.0.2 \
    crate://crates.io/data-encoding/2.3.2 \
    crate://crates.io/der/0.5.1 \
    crate://crates.io/der-parser/8.1.0 \
    crate://crates.io/derivation-path/0.2.0 \
    crate://crates.io/derive_arbitrary/1.0.2 \
    crate://crates.io/derive_more/0.99.17 \
    crate://crates.io/dialoguer/0.10.2 \
    crate://crates.io/difflib/0.4.0 \
    crate://crates.io/digest/0.8.1 \
    crate://crates.io/digest/0.9.0 \
    crate://crates.io/digest/0.10.3 \
    crate://crates.io/dir-diff/0.3.2 \
    crate://crates.io/dirs-next/2.0.0 \
    crate://crates.io/dirs-sys-next/0.1.2 \
    crate://crates.io/displaydoc/0.2.3 \
    crate://crates.io/dlopen/0.1.8 \
    crate://crates.io/dlopen_derive/0.1.4 \
    crate://crates.io/doc-comment/0.3.3 \
    crate://crates.io/eager/0.1.0 \
    crate://crates.io/ed25519/1.3.0 \
    crate://crates.io/ed25519-dalek/1.0.1 \
    crate://crates.io/ed25519-dalek-bip32/0.2.0 \
    crate://crates.io/educe/0.4.18 \
    crate://crates.io/either/1.8.0 \
    crate://crates.io/encode_unicode/0.3.6 \
    crate://crates.io/encoding_rs/0.8.30 \
    crate://crates.io/enum-iterator/0.8.1 \
    crate://crates.io/enum-iterator-derive/0.8.1 \
    crate://crates.io/enum-ordinalize/3.1.10 \
    crate://crates.io/enum_dispatch/0.3.8 \
    crate://crates.io/env_logger/0.9.0 \
    crate://crates.io/errno/0.2.8 \
    crate://crates.io/errno-dragonfly/0.1.2 \
    crate://crates.io/etcd-client/0.8.2 \
    crate://crates.io/event-listener/2.5.2 \
    crate://crates.io/fake-simd/0.1.2 \
    crate://crates.io/fast-math/0.1.1 \
    crate://crates.io/fastrand/1.7.0 \
    crate://crates.io/feature-probe/0.1.1 \
    crate://crates.io/filetime/0.2.15 \
    crate://crates.io/fixedbitset/0.4.1 \
    crate://crates.io/flate2/1.0.24 \
    crate://crates.io/fnv/1.0.7 \
    crate://crates.io/foreign-types/0.3.2 \
    crate://crates.io/foreign-types-shared/0.1.1 \
    crate://crates.io/form_urlencoded/1.0.1 \
    crate://crates.io/fs_extra/1.2.0 \
    crate://crates.io/futures/0.1.31 \
    crate://crates.io/futures/0.3.21 \
    crate://crates.io/futures-channel/0.3.24 \
    crate://crates.io/futures-core/0.3.24 \
    crate://crates.io/futures-executor/0.3.21 \
    crate://crates.io/futures-io/0.3.24 \
    crate://crates.io/futures-macro/0.3.24 \
    crate://crates.io/futures-sink/0.3.24 \
    crate://crates.io/futures-task/0.3.24 \
    crate://crates.io/futures-util/0.3.24 \
    crate://crates.io/fxhash/0.2.1 \
    crate://crates.io/generic-array/0.12.4 \
    crate://crates.io/generic-array/0.14.5 \
    crate://crates.io/gethostname/0.2.3 \
    crate://crates.io/getrandom/0.1.16 \
    crate://crates.io/getrandom/0.2.3 \
    crate://crates.io/glob/0.3.0 \
    crate://crates.io/globset/0.4.8 \
    crate://crates.io/goauth/0.13.1 \
    crate://crates.io/goblin/0.5.4 \
    crate://crates.io/h2/0.3.13 \
    crate://crates.io/hash32/0.2.1 \
    crate://crates.io/hashbrown/0.11.2 \
    crate://crates.io/hashbrown/0.12.3 \
    crate://crates.io/headers/0.3.7 \
    crate://crates.io/headers-core/0.2.0 \
    crate://crates.io/heck/0.3.3 \
    crate://crates.io/heck/0.4.0 \
    crate://crates.io/hermit-abi/0.1.19 \
    crate://crates.io/hex/0.4.3 \
    crate://crates.io/hidapi/1.4.1 \
    crate://crates.io/histogram/0.6.9 \
    crate://crates.io/hmac/0.8.1 \
    crate://crates.io/hmac/0.12.1 \
    crate://crates.io/hmac-drbg/0.3.0 \
    crate://crates.io/honggfuzz/0.5.55 \
    crate://crates.io/http/0.2.8 \
    crate://crates.io/http-body/0.4.5 \
    crate://crates.io/http-range-header/0.3.0 \
    crate://crates.io/httparse/1.7.1 \
    crate://crates.io/httpdate/1.0.2 \
    crate://crates.io/humantime/2.1.0 \
    crate://crates.io/hyper/0.14.20 \
    crate://crates.io/hyper-proxy/0.9.1 \
    crate://crates.io/hyper-rustls/0.23.0 \
    crate://crates.io/hyper-timeout/0.4.1 \
    crate://crates.io/hyper-tls/0.5.0 \
    crate://crates.io/ident_case/1.0.1 \
    crate://crates.io/idna/0.1.5 \
    crate://crates.io/idna/0.2.3 \
    crate://crates.io/ieee754/0.2.6 \
    crate://crates.io/im/15.1.0 \
    crate://crates.io/index_list/0.2.7 \
    crate://crates.io/indexmap/1.9.1 \
    crate://crates.io/indicatif/0.16.2 \
    crate://crates.io/inout/0.1.2 \
    crate://crates.io/instant/0.1.12 \
    crate://crates.io/ipnet/2.3.1 \
    crate://crates.io/itertools/0.10.3 \
    crate://crates.io/itoa/1.0.3 \
    crate://crates.io/jobserver/0.1.24 \
    crate://crates.io/js-sys/0.3.59 \
    crate://crates.io/json5/0.4.1 \
    crate://crates.io/jsonrpc-client-transports/18.0.0 \
    crate://crates.io/jsonrpc-core/18.0.0 \
    crate://crates.io/jsonrpc-core-client/18.0.0 \
    crate://crates.io/jsonrpc-derive/18.0.0 \
    crate://crates.io/jsonrpc-http-server/18.0.0 \
    crate://crates.io/jsonrpc-pubsub/18.0.0 \
    crate://crates.io/jsonrpc-server-utils/18.0.0 \
    crate://crates.io/keccak/0.1.0 \
    crate://crates.io/kernel32-sys/0.2.2 \
    crate://crates.io/lazy_static/1.4.0 \
    crate://crates.io/lazycell/1.3.0 \
    crate://crates.io/libc/0.2.132 \
    crate://crates.io/libloading/0.7.3 \
    crate://crates.io/libm/0.2.2 \
    crate://crates.io/librocksdb-sys/0.8.0+7.4.4 \
    crate://crates.io/libsecp256k1/0.6.0 \
    crate://crates.io/libsecp256k1-core/0.2.2 \
    crate://crates.io/libsecp256k1-gen-ecmult/0.2.1 \
    crate://crates.io/libsecp256k1-gen-genmult/0.2.1 \
    crate://crates.io/libz-sys/1.1.5 \
    crate://crates.io/linked-hash-map/0.5.4 \
    crate://crates.io/lock_api/0.4.6 \
    crate://crates.io/log/0.4.17 \
    crate://crates.io/lru/0.7.8 \
    crate://crates.io/lz4/1.24.0 \
    crate://crates.io/lz4-sys/1.9.4 \
    crate://crates.io/maplit/1.0.2 \
    crate://crates.io/matches/0.1.9 \
    crate://crates.io/matchit/0.5.0 \
    crate://crates.io/memchr/2.5.0 \
    crate://crates.io/memmap2/0.5.3 \
    crate://crates.io/memoffset/0.6.5 \
    crate://crates.io/merlin/3.0.0 \
    crate://crates.io/metaplex-token-metadata/0.0.1 \
    crate://crates.io/metaplex-token-vault/0.0.1 \
    crate://crates.io/mime/0.3.16 \
    crate://crates.io/min-max-heap/1.3.0 \
    crate://crates.io/minimal-lexical/0.2.1 \
    crate://crates.io/miniz_oxide/0.5.1 \
    crate://crates.io/mio/0.7.14 \
    crate://crates.io/miow/0.3.7 \
    crate://crates.io/modular-bitfield/0.11.2 \
    crate://crates.io/modular-bitfield-impl/0.11.2 \
    crate://crates.io/mpl-token-metadata/1.3.4 \
    crate://crates.io/mpl-token-vault/0.1.0 \
    crate://crates.io/multimap/0.8.3 \
    crate://crates.io/native-tls/0.2.10 \
    crate://crates.io/net2/0.2.37 \
    crate://crates.io/nix/0.24.2 \
    crate://crates.io/nom/7.1.1 \
    crate://crates.io/ntapi/0.3.6 \
    crate://crates.io/num/0.2.1 \
    crate://crates.io/num-bigint/0.2.6 \
    crate://crates.io/num-bigint/0.4.3 \
    crate://crates.io/num-complex/0.2.4 \
    crate://crates.io/num-derive/0.3.3 \
    crate://crates.io/num-integer/0.1.44 \
    crate://crates.io/num-iter/0.1.43 \
    crate://crates.io/num-rational/0.2.4 \
    crate://crates.io/num-traits/0.2.14 \
    crate://crates.io/num_cpus/1.13.1 \
    crate://crates.io/num_enum/0.5.7 \
    crate://crates.io/num_enum_derive/0.5.7 \
    crate://crates.io/num_threads/0.1.5 \
    crate://crates.io/number_prefix/0.4.0 \
    crate://crates.io/oid-registry/0.6.0 \
    crate://crates.io/once_cell/1.13.1 \
    crate://crates.io/opaque-debug/0.2.3 \
    crate://crates.io/opaque-debug/0.3.0 \
    crate://crates.io/openssl/0.10.38 \
    crate://crates.io/openssl-probe/0.1.5 \
    crate://crates.io/openssl-src/111.22.0+1.1.1q \
    crate://crates.io/openssl-sys/0.9.72 \
    crate://crates.io/opentelemetry/0.17.0 \
    crate://crates.io/os_str_bytes/6.3.0 \
    crate://crates.io/ouroboros/0.15.2 \
    crate://crates.io/ouroboros_macro/0.15.2 \
    crate://crates.io/parking_lot/0.11.2 \
    crate://crates.io/parking_lot/0.12.0 \
    crate://crates.io/parking_lot_core/0.8.5 \
    crate://crates.io/parking_lot_core/0.9.2 \
    crate://crates.io/pbkdf2/0.4.0 \
    crate://crates.io/pbkdf2/0.11.0 \
    crate://crates.io/peeking_take_while/0.1.2 \
    crate://crates.io/pem/1.0.2 \
    crate://crates.io/percent-encoding/1.0.1 \
    crate://crates.io/percent-encoding/2.1.0 \
    crate://crates.io/percentage/0.1.0 \
    crate://crates.io/pest/2.1.3 \
    crate://crates.io/pest_derive/2.1.0 \
    crate://crates.io/pest_generator/2.1.3 \
    crate://crates.io/pest_meta/2.1.3 \
    crate://crates.io/petgraph/0.6.0 \
    crate://crates.io/pin-project/1.0.9 \
    crate://crates.io/pin-project-internal/1.0.9 \
    crate://crates.io/pin-project-lite/0.2.9 \
    crate://crates.io/pin-utils/0.1.0 \
    crate://crates.io/pkcs8/0.8.0 \
    crate://crates.io/pkg-config/0.3.24 \
    crate://crates.io/plain/0.2.3 \
    crate://crates.io/polyval/0.5.3 \
    crate://crates.io/ppv-lite86/0.2.15 \
    crate://crates.io/predicates/2.1.1 \
    crate://crates.io/predicates-core/1.0.3 \
    crate://crates.io/predicates-tree/1.0.5 \
    crate://crates.io/pretty-hex/0.3.0 \
    crate://crates.io/prettyplease/0.1.9 \
    crate://crates.io/proc-macro-crate/0.1.5 \
    crate://crates.io/proc-macro-crate/1.1.0 \
    crate://crates.io/proc-macro-error/1.0.4 \
    crate://crates.io/proc-macro-error-attr/1.0.4 \
    crate://crates.io/proc-macro2/0.4.30 \
    crate://crates.io/proc-macro2/1.0.43 \
    crate://crates.io/proptest/1.0.0 \
    crate://crates.io/prost/0.9.0 \
    crate://crates.io/prost/0.11.0 \
    crate://crates.io/prost-build/0.9.0 \
    crate://crates.io/prost-build/0.11.1 \
    crate://crates.io/prost-derive/0.9.0 \
    crate://crates.io/prost-derive/0.11.0 \
    crate://crates.io/prost-types/0.9.0 \
    crate://crates.io/prost-types/0.11.1 \
    crate://crates.io/protobuf-src/1.0.5+3.19.3 \
    crate://crates.io/qstring/0.7.2 \
    crate://crates.io/quick-error/1.2.3 \
    crate://crates.io/quick-error/2.0.1 \
    crate://crates.io/quinn/0.8.3 \
    crate://crates.io/quinn-proto/0.8.3 \
    crate://crates.io/quinn-udp/0.1.1 \
    crate://crates.io/quote/0.6.13 \
    crate://crates.io/quote/1.0.21 \
    crate://crates.io/rand/0.7.3 \
    crate://crates.io/rand/0.8.5 \
    crate://crates.io/rand_chacha/0.2.2 \
    crate://crates.io/rand_chacha/0.3.1 \
    crate://crates.io/rand_core/0.5.1 \
    crate://crates.io/rand_core/0.6.3 \
    crate://crates.io/rand_distr/0.4.3 \
    crate://crates.io/rand_hc/0.2.0 \
    crate://crates.io/rand_xorshift/0.3.0 \
    crate://crates.io/rand_xoshiro/0.6.0 \
    crate://crates.io/rayon/1.5.3 \
    crate://crates.io/rayon-core/1.9.2 \
    crate://crates.io/rcgen/0.9.2 \
    crate://crates.io/redox_syscall/0.2.10 \
    crate://crates.io/redox_users/0.4.0 \
    crate://crates.io/reed-solomon-erasure/6.0.0 \
    crate://crates.io/regex/1.6.0 \
    crate://crates.io/regex-automata/0.1.10 \
    crate://crates.io/regex-syntax/0.6.27 \
    crate://crates.io/remove_dir_all/0.5.3 \
    crate://crates.io/reqwest/0.11.11 \
    crate://crates.io/ring/0.16.20 \
    crate://crates.io/rocksdb/0.19.0 \
    crate://crates.io/roots/0.0.7 \
    crate://crates.io/rpassword/6.0.1 \
    crate://crates.io/rustc-demangle/0.1.21 \
    crate://crates.io/rustc-hash/1.1.0 \
    crate://crates.io/rustc_version/0.4.0 \
    crate://crates.io/rusticata-macros/4.1.0 \
    crate://crates.io/rustls/0.19.1 \
    crate://crates.io/rustls/0.20.6 \
    crate://crates.io/rustls-native-certs/0.6.1 \
    crate://crates.io/rustls-pemfile/0.2.1 \
    crate://crates.io/rustls-pemfile/1.0.1 \
    crate://crates.io/rustversion/1.0.9 \
    crate://crates.io/rusty-fork/0.3.0 \
    crate://crates.io/ryu/1.0.9 \
    crate://crates.io/same-file/1.0.6 \
    crate://crates.io/schannel/0.1.19 \
    crate://crates.io/scopeguard/1.1.0 \
    crate://crates.io/scroll/0.11.0 \
    crate://crates.io/scroll_derive/0.11.0 \
    crate://crates.io/sct/0.6.1 \
    crate://crates.io/sct/0.7.0 \
    crate://crates.io/security-framework/2.6.1 \
    crate://crates.io/security-framework-sys/2.6.1 \
    crate://crates.io/semver/1.0.13 \
    crate://crates.io/serde/1.0.143 \
    crate://crates.io/serde_bytes/0.11.7 \
    crate://crates.io/serde_derive/1.0.143 \
    crate://crates.io/serde_json/1.0.81 \
    crate://crates.io/serde_urlencoded/0.7.1 \
    crate://crates.io/serde_with/1.14.0 \
    crate://crates.io/serde_with_macros/1.5.2 \
    crate://crates.io/serde_yaml/0.8.26 \
    crate://crates.io/serial_test/0.5.1 \
    crate://crates.io/serial_test/0.8.0 \
    crate://crates.io/serial_test_derive/0.5.1 \
    crate://crates.io/serial_test_derive/0.8.0 \
    crate://crates.io/sha-1/0.8.2 \
    crate://crates.io/sha-1/0.9.8 \
    crate://crates.io/sha-1/0.10.0 \
    crate://crates.io/sha2/0.9.8 \
    crate://crates.io/sha2/0.10.2 \
    crate://crates.io/sha3/0.9.1 \
    crate://crates.io/sha3/0.10.1 \
    crate://crates.io/shank/0.0.5 \
    crate://crates.io/shank_macro/0.0.5 \
    crate://crates.io/shank_macro_impl/0.0.5 \
    crate://crates.io/sharded-slab/0.1.4 \
    crate://crates.io/shlex/1.1.0 \
    crate://crates.io/signal-hook-registry/1.4.0 \
    crate://crates.io/signature/1.4.0 \
    crate://crates.io/simpl/0.1.0 \
    crate://crates.io/sized-chunks/0.6.5 \
    crate://crates.io/slab/0.4.7 \
    crate://crates.io/smallvec/1.7.0 \
    crate://crates.io/smpl_jwt/0.7.1 \
    crate://crates.io/socket2/0.4.4 \
    crate://crates.io/soketto/0.7.1 \
    crate://crates.io/solana-account-decoder/1.14.4 \
    crate://crates.io/solana-address-lookup-table-program/1.14.4 \
    crate://crates.io/solana-banks-client/1.14.4 \
    crate://crates.io/solana-banks-interface/1.14.4 \
    crate://crates.io/solana-banks-server/1.14.4 \
    crate://crates.io/solana-bloom/1.14.4 \
    crate://crates.io/solana-bpf-loader-program/1.14.4 \
    crate://crates.io/solana-bucket-map/1.14.4 \
    crate://crates.io/solana-clap-utils/1.14.4 \
    crate://crates.io/solana-clap-v3-utils/1.14.4 \
    crate://crates.io/solana-cli-config/1.14.4 \
    crate://crates.io/solana-cli-output/1.14.4 \
    crate://crates.io/solana-client/1.14.4 \
    crate://crates.io/solana-compute-budget-program/1.14.4 \
    crate://crates.io/solana-config-program/1.14.4 \
    crate://crates.io/solana-core/1.14.4 \
    crate://crates.io/solana-entry/1.14.4 \
    crate://crates.io/solana-faucet/1.14.4 \
    crate://crates.io/solana-frozen-abi/1.14.4 \
    crate://crates.io/solana-frozen-abi-macro/1.14.4 \
    crate://crates.io/solana-geyser-plugin-interface/1.14.4 \
    crate://crates.io/solana-geyser-plugin-manager/1.14.4 \
    crate://crates.io/solana-gossip/1.14.4 \
    crate://crates.io/solana-ledger/1.14.4 \
    crate://crates.io/solana-logger/1.14.4 \
    crate://crates.io/solana-measure/1.14.4 \
    crate://crates.io/solana-merkle-tree/1.14.4 \
    crate://crates.io/solana-metrics/1.14.4 \
    crate://crates.io/solana-net-utils/1.14.4 \
    crate://crates.io/solana-perf/1.14.4 \
    crate://crates.io/solana-poh/1.14.4 \
    crate://crates.io/solana-program/1.14.4 \
    crate://crates.io/solana-program-runtime/1.14.4 \
    crate://crates.io/solana-program-test/1.14.4 \
    crate://crates.io/solana-rayon-threadlimit/1.14.4 \
    crate://crates.io/solana-remote-wallet/1.14.4 \
    crate://crates.io/solana-rpc/1.14.4 \
    crate://crates.io/solana-runtime/1.14.4 \
    crate://crates.io/solana-sdk/1.14.4 \
    crate://crates.io/solana-sdk-macro/1.14.4 \
    crate://crates.io/solana-send-transaction-service/1.14.4 \
    crate://crates.io/solana-stake-program/1.14.4 \
    crate://crates.io/solana-storage-bigtable/1.14.4 \
    crate://crates.io/solana-storage-proto/1.14.4 \
    crate://crates.io/solana-streamer/1.14.4 \
    crate://crates.io/solana-sys-tuner/1.14.4 \
    crate://crates.io/solana-test-validator/1.14.4 \
    crate://crates.io/solana-transaction-status/1.14.4 \
    crate://crates.io/solana-version/1.14.4 \
    crate://crates.io/solana-vote-program/1.14.4 \
    crate://crates.io/solana-zk-token-proof-program/1.14.4 \
    crate://crates.io/solana-zk-token-sdk/1.14.4 \
    crate://crates.io/solana_rbpf/0.2.31 \
    crate://crates.io/spin/0.5.2 \
    crate://crates.io/spin/0.9.2 \
    crate://crates.io/spki/0.5.4 \
    crate://crates.io/spl-associated-token-account/1.1.1 \
    crate://crates.io/spl-memo/3.0.1 \
    crate://crates.io/spl-token/3.5.0 \
    crate://crates.io/spl-token-2022/0.4.2 \
    crate://crates.io/static_assertions/1.1.0 \
    crate://crates.io/stream-cancel/0.8.1 \
    crate://crates.io/strsim/0.8.0 \
    crate://crates.io/strsim/0.10.0 \
    crate://crates.io/strum/0.24.0 \
    crate://crates.io/strum_macros/0.24.0 \
    crate://crates.io/subtle/2.4.1 \
    crate://crates.io/symlink/0.1.0 \
    crate://crates.io/syn/0.15.44 \
    crate://crates.io/syn/1.0.99 \
    crate://crates.io/sync_wrapper/0.1.1 \
    crate://crates.io/synstructure/0.12.6 \
    crate://crates.io/sys-info/0.9.1 \
    crate://crates.io/sysctl/0.4.4 \
    crate://crates.io/tar/0.4.38 \
    crate://crates.io/tarpc/0.29.0 \
    crate://crates.io/tarpc-plugins/0.12.0 \
    crate://crates.io/tempfile/3.3.0 \
    crate://crates.io/termcolor/1.1.2 \
    crate://crates.io/terminal_size/0.1.17 \
    crate://crates.io/termtree/0.2.4 \
    crate://crates.io/test-case/2.2.1 \
    crate://crates.io/test-case-macros/2.2.1 \
    crate://crates.io/textwrap/0.11.0 \
    crate://crates.io/textwrap/0.15.0 \
    crate://crates.io/thiserror/1.0.32 \
    crate://crates.io/thiserror-impl/1.0.32 \
    crate://crates.io/thread_local/1.1.4 \
    crate://crates.io/time/0.1.44 \
    crate://crates.io/time/0.3.9 \
    crate://crates.io/time-macros/0.2.4 \
    crate://crates.io/tiny-bip39/0.8.2 \
    crate://crates.io/tinyvec/1.5.1 \
    crate://crates.io/tinyvec_macros/0.1.0 \
    crate://crates.io/tokio/1.14.1 \
    crate://crates.io/tokio-io-timeout/1.2.0 \
    crate://crates.io/tokio-macros/1.7.0 \
    crate://crates.io/tokio-native-tls/0.3.0 \
    crate://crates.io/tokio-rustls/0.22.0 \
    crate://crates.io/tokio-rustls/0.23.2 \
    crate://crates.io/tokio-serde/0.8.0 \
    crate://crates.io/tokio-stream/0.1.9 \
    crate://crates.io/tokio-tungstenite/0.17.1 \
    crate://crates.io/tokio-util/0.6.9 \
    crate://crates.io/tokio-util/0.7.1 \
    crate://crates.io/toml/0.5.8 \
    crate://crates.io/tonic/0.6.2 \
    crate://crates.io/tonic/0.8.0 \
    crate://crates.io/tonic-build/0.6.2 \
    crate://crates.io/tonic-build/0.8.0 \
    crate://crates.io/tower/0.4.12 \
    crate://crates.io/tower-http/0.2.5 \
    crate://crates.io/tower-layer/0.3.1 \
    crate://crates.io/tower-service/0.3.1 \
    crate://crates.io/tracing/0.1.29 \
    crate://crates.io/tracing-attributes/0.1.18 \
    crate://crates.io/tracing-core/0.1.21 \
    crate://crates.io/tracing-futures/0.2.5 \
    crate://crates.io/tracing-opentelemetry/0.17.4 \
    crate://crates.io/tracing-subscriber/0.3.7 \
    crate://crates.io/trees/0.4.2 \
    crate://crates.io/try-lock/0.2.3 \
    crate://crates.io/tungstenite/0.17.2 \
    crate://crates.io/typenum/1.15.0 \
    crate://crates.io/ucd-trie/0.1.3 \
    crate://crates.io/uint/0.9.1 \
    crate://crates.io/unicase/2.6.0 \
    crate://crates.io/unicode-bidi/0.3.7 \
    crate://crates.io/unicode-ident/1.0.3 \
    crate://crates.io/unicode-normalization/0.1.19 \
    crate://crates.io/unicode-segmentation/1.8.0 \
    crate://crates.io/unicode-width/0.1.9 \
    crate://crates.io/unicode-xid/0.1.0 \
    crate://crates.io/unicode-xid/0.2.2 \
    crate://crates.io/universal-hash/0.4.1 \
    crate://crates.io/unix_socket2/0.5.4 \
    crate://crates.io/unreachable/1.0.0 \
    crate://crates.io/untrusted/0.7.1 \
    crate://crates.io/uriparse/0.6.4 \
    crate://crates.io/url/1.7.2 \
    crate://crates.io/url/2.2.2 \
    crate://crates.io/users/0.10.0 \
    crate://crates.io/utf-8/0.7.6 \
    crate://crates.io/vcpkg/0.2.15 \
    crate://crates.io/vec_map/0.8.2 \
    crate://crates.io/version_check/0.9.3 \
    crate://crates.io/void/1.0.2 \
    crate://crates.io/wait-timeout/0.2.0 \
    crate://crates.io/walkdir/2.3.2 \
    crate://crates.io/want/0.3.0 \
    crate://crates.io/wasi/0.9.0+wasi-snapshot-preview1 \
    crate://crates.io/wasi/0.10.0+wasi-snapshot-preview1 \
    crate://crates.io/wasm-bindgen/0.2.82 \
    crate://crates.io/wasm-bindgen-backend/0.2.82 \
    crate://crates.io/wasm-bindgen-futures/0.4.28 \
    crate://crates.io/wasm-bindgen-macro/0.2.82 \
    crate://crates.io/wasm-bindgen-macro-support/0.2.82 \
    crate://crates.io/wasm-bindgen-shared/0.2.82 \
    crate://crates.io/web-sys/0.3.55 \
    crate://crates.io/webpki/0.21.4 \
    crate://crates.io/webpki/0.22.0 \
    crate://crates.io/webpki-roots/0.22.1 \
    crate://crates.io/which/4.2.5 \
    crate://crates.io/winapi/0.2.8 \
    crate://crates.io/winapi/0.3.9 \
    crate://crates.io/winapi-build/0.1.1 \
    crate://crates.io/winapi-i686-pc-windows-gnu/0.4.0 \
    crate://crates.io/winapi-util/0.1.5 \
    crate://crates.io/winapi-x86_64-pc-windows-gnu/0.4.0 \
    crate://crates.io/windows-sys/0.34.0 \
    crate://crates.io/windows_aarch64_msvc/0.34.0 \
    crate://crates.io/windows_i686_gnu/0.34.0 \
    crate://crates.io/windows_i686_msvc/0.34.0 \
    crate://crates.io/windows_x86_64_gnu/0.34.0 \
    crate://crates.io/windows_x86_64_msvc/0.34.0 \
    crate://crates.io/winreg/0.10.1 \
    crate://crates.io/x509-parser/0.14.0 \
    crate://crates.io/xattr/0.2.2 \
    crate://crates.io/yaml-rust/0.4.5 \
    crate://crates.io/yasna/0.5.0 \
    crate://crates.io/zeroize/1.3.0 \
    crate://crates.io/zeroize_derive/1.2.2 \
    crate://crates.io/zstd/0.11.2+zstd.1.5.2 \
    crate://crates.io/zstd-safe/5.0.1+zstd.1.5.2 \
    crate://crates.io/zstd-sys/2.0.1+zstd.1.5.2 \
"
# from ../../token-lending/flash_loan_receiver/Cargo.lock
SRC_URI += " \
    crate://crates.io/ahash/0.4.7 \
    crate://crates.io/aho-corasick/0.7.18 \
    crate://crates.io/arrayref/0.3.6 \
    crate://crates.io/arrayvec/0.5.2 \
    crate://crates.io/atty/0.2.14 \
    crate://crates.io/autocfg/1.0.1 \
    crate://crates.io/base64/0.12.3 \
    crate://crates.io/bincode/1.3.3 \
    crate://crates.io/blake3/0.3.8 \
    crate://crates.io/block-buffer/0.9.0 \
    crate://crates.io/block-padding/0.2.1 \
    crate://crates.io/borsh/0.9.1 \
    crate://crates.io/borsh-derive/0.9.1 \
    crate://crates.io/borsh-derive-internal/0.9.1 \
    crate://crates.io/borsh-schema-derive-internal/0.9.1 \
    crate://crates.io/bs58/0.3.1 \
    crate://crates.io/bv/0.11.1 \
    crate://crates.io/byteorder/1.4.3 \
    crate://crates.io/cc/1.0.69 \
    crate://crates.io/cfg-if/0.1.10 \
    crate://crates.io/cfg-if/1.0.0 \
    crate://crates.io/constant_time_eq/0.1.5 \
    crate://crates.io/cpufeatures/0.1.5 \
    crate://crates.io/crunchy/0.2.2 \
    crate://crates.io/crypto-mac/0.8.0 \
    crate://crates.io/curve25519-dalek/2.1.3 \
    crate://crates.io/derivative/2.2.0 \
    crate://crates.io/digest/0.8.1 \
    crate://crates.io/digest/0.9.0 \
    crate://crates.io/either/1.6.1 \
    crate://crates.io/env_logger/0.8.4 \
    crate://crates.io/feature-probe/0.1.1 \
    crate://crates.io/generic-array/0.12.4 \
    crate://crates.io/generic-array/0.14.4 \
    crate://crates.io/getrandom/0.1.16 \
    crate://crates.io/hashbrown/0.9.1 \
    crate://crates.io/hermit-abi/0.1.19 \
    crate://crates.io/hex/0.4.3 \
    crate://crates.io/hmac/0.8.1 \
    crate://crates.io/hmac-drbg/0.3.0 \
    crate://crates.io/humantime/2.1.0 \
    crate://crates.io/itertools/0.9.0 \
    crate://crates.io/keccak/0.1.0 \
    crate://crates.io/lazy_static/1.4.0 \
    crate://crates.io/libc/0.2.99 \
    crate://crates.io/libsecp256k1/0.5.0 \
    crate://crates.io/libsecp256k1-core/0.2.2 \
    crate://crates.io/libsecp256k1-gen-ecmult/0.2.1 \
    crate://crates.io/libsecp256k1-gen-genmult/0.2.1 \
    crate://crates.io/log/0.4.14 \
    crate://crates.io/memchr/2.4.0 \
    crate://crates.io/memmap2/0.1.0 \
    crate://crates.io/num-derive/0.3.3 \
    crate://crates.io/num-traits/0.2.14 \
    crate://crates.io/num_enum/0.5.3 \
    crate://crates.io/num_enum_derive/0.5.3 \
    crate://crates.io/opaque-debug/0.3.0 \
    crate://crates.io/ppv-lite86/0.2.10 \
    crate://crates.io/proc-macro-crate/0.1.5 \
    crate://crates.io/proc-macro-crate/1.0.0 \
    crate://crates.io/proc-macro2/1.0.28 \
    crate://crates.io/quote/1.0.9 \
    crate://crates.io/rand/0.7.3 \
    crate://crates.io/rand_chacha/0.2.2 \
    crate://crates.io/rand_core/0.5.1 \
    crate://crates.io/rand_hc/0.2.0 \
    crate://crates.io/regex/1.5.5 \
    crate://crates.io/regex-syntax/0.6.25 \
    crate://crates.io/rustc_version/0.2.3 \
    crate://crates.io/rustversion/1.0.5 \
    crate://crates.io/semver/0.9.0 \
    crate://crates.io/semver-parser/0.7.0 \
    crate://crates.io/serde/1.0.127 \
    crate://crates.io/serde_bytes/0.11.5 \
    crate://crates.io/serde_derive/1.0.127 \
    crate://crates.io/sha2/0.9.5 \
    crate://crates.io/sha3/0.9.1 \
    crate://crates.io/solana-frozen-abi/1.7.9 \
    crate://crates.io/solana-frozen-abi-macro/1.7.9 \
    crate://crates.io/solana-logger/1.7.9 \
    crate://crates.io/solana-program/1.7.9 \
    crate://crates.io/solana-sdk-macro/1.7.9 \
    crate://crates.io/spl-token/3.2.0 \
    crate://crates.io/subtle/2.4.1 \
    crate://crates.io/syn/1.0.74 \
    crate://crates.io/termcolor/1.1.2 \
    crate://crates.io/thiserror/1.0.26 \
    crate://crates.io/thiserror-impl/1.0.26 \
    crate://crates.io/toml/0.5.8 \
    crate://crates.io/typenum/1.13.0 \
    crate://crates.io/unicode-xid/0.2.2 \
    crate://crates.io/version_check/0.9.3 \
    crate://crates.io/wasi/0.9.0+wasi-snapshot-preview1 \
    crate://crates.io/winapi/0.3.9 \
    crate://crates.io/winapi-i686-pc-windows-gnu/0.4.0 \
    crate://crates.io/winapi-util/0.1.5 \
    crate://crates.io/winapi-x86_64-pc-windows-gnu/0.4.0 \
    crate://crates.io/zeroize/1.4.1 \
"
# from ../../account-compression/Cargo.lock
SRC_URI += " \
    crate://crates.io/ahash/0.7.6 \
    crate://crates.io/aho-corasick/0.7.18 \
    crate://crates.io/anchor-attribute-access-control/0.25.0 \
    crate://crates.io/anchor-attribute-account/0.25.0 \
    crate://crates.io/anchor-attribute-constant/0.25.0 \
    crate://crates.io/anchor-attribute-error/0.25.0 \
    crate://crates.io/anchor-attribute-event/0.25.0 \
    crate://crates.io/anchor-attribute-interface/0.25.0 \
    crate://crates.io/anchor-attribute-program/0.25.0 \
    crate://crates.io/anchor-attribute-state/0.25.0 \
    crate://crates.io/anchor-derive-accounts/0.25.0 \
    crate://crates.io/anchor-lang/0.25.0 \
    crate://crates.io/anchor-syn/0.25.0 \
    crate://crates.io/anyhow/1.0.57 \
    crate://crates.io/arrayref/0.3.6 \
    crate://crates.io/arrayvec/0.7.2 \
    crate://crates.io/autocfg/1.1.0 \
    crate://crates.io/base64/0.12.3 \
    crate://crates.io/base64/0.13.0 \
    crate://crates.io/bincode/1.3.3 \
    crate://crates.io/bitflags/1.3.2 \
    crate://crates.io/bitmaps/2.1.0 \
    crate://crates.io/blake3/1.3.1 \
    crate://crates.io/block-buffer/0.9.0 \
    crate://crates.io/block-buffer/0.10.2 \
    crate://crates.io/borsh/0.9.3 \
    crate://crates.io/borsh-derive/0.9.3 \
    crate://crates.io/borsh-derive-internal/0.9.3 \
    crate://crates.io/borsh-schema-derive-internal/0.9.3 \
    crate://crates.io/bs58/0.3.1 \
    crate://crates.io/bs58/0.4.0 \
    crate://crates.io/bumpalo/3.10.0 \
    crate://crates.io/bv/0.11.1 \
    crate://crates.io/bytemuck/1.9.1 \
    crate://crates.io/bytemuck_derive/1.1.0 \
    crate://crates.io/byteorder/1.4.3 \
    crate://crates.io/cc/1.0.73 \
    crate://crates.io/cfg-if/1.0.0 \
    crate://crates.io/console_error_panic_hook/0.1.7 \
    crate://crates.io/console_log/0.2.0 \
    crate://crates.io/constant_time_eq/0.1.5 \
    crate://crates.io/cpufeatures/0.2.2 \
    crate://crates.io/crossbeam-channel/0.5.4 \
    crate://crates.io/crossbeam-deque/0.8.1 \
    crate://crates.io/crossbeam-epoch/0.9.8 \
    crate://crates.io/crossbeam-utils/0.8.8 \
    crate://crates.io/crunchy/0.2.2 \
    crate://crates.io/crypto-common/0.1.3 \
    crate://crates.io/crypto-mac/0.8.0 \
    crate://crates.io/curve25519-dalek/3.2.1 \
    crate://crates.io/digest/0.9.0 \
    crate://crates.io/digest/0.10.3 \
    crate://crates.io/either/1.6.1 \
    crate://crates.io/feature-probe/0.1.1 \
    crate://crates.io/generic-array/0.14.5 \
    crate://crates.io/getrandom/0.1.16 \
    crate://crates.io/getrandom/0.2.7 \
    crate://crates.io/hashbrown/0.11.2 \
    crate://crates.io/heck/0.3.3 \
    crate://crates.io/hermit-abi/0.1.19 \
    crate://crates.io/hmac/0.8.1 \
    crate://crates.io/hmac-drbg/0.3.0 \
    crate://crates.io/im/15.1.0 \
    crate://crates.io/itertools/0.10.3 \
    crate://crates.io/itoa/1.0.2 \
    crate://crates.io/js-sys/0.3.58 \
    crate://crates.io/keccak/0.1.2 \
    crate://crates.io/lazy_static/1.4.0 \
    crate://crates.io/libc/0.2.126 \
    crate://crates.io/libsecp256k1/0.6.0 \
    crate://crates.io/libsecp256k1-core/0.2.2 \
    crate://crates.io/libsecp256k1-gen-ecmult/0.2.1 \
    crate://crates.io/libsecp256k1-gen-genmult/0.2.1 \
    crate://crates.io/lock_api/0.4.7 \
    crate://crates.io/log/0.4.17 \
    crate://crates.io/memchr/2.5.0 \
    crate://crates.io/memmap2/0.5.4 \
    crate://crates.io/memoffset/0.6.5 \
    crate://crates.io/num-derive/0.3.3 \
    crate://crates.io/num-traits/0.2.15 \
    crate://crates.io/num_cpus/1.13.1 \
    crate://crates.io/once_cell/1.12.0 \
    crate://crates.io/opaque-debug/0.3.0 \
    crate://crates.io/parking_lot/0.12.1 \
    crate://crates.io/parking_lot_core/0.9.3 \
    crate://crates.io/ppv-lite86/0.2.16 \
    crate://crates.io/proc-macro-crate/0.1.5 \
    crate://crates.io/proc-macro2/1.0.39 \
    crate://crates.io/proc-macro2-diagnostics/0.9.1 \
    crate://crates.io/quote/1.0.18 \
    crate://crates.io/rand/0.7.3 \
    crate://crates.io/rand_chacha/0.2.2 \
    crate://crates.io/rand_core/0.5.1 \
    crate://crates.io/rand_core/0.6.3 \
    crate://crates.io/rand_hc/0.2.0 \
    crate://crates.io/rand_xoshiro/0.6.0 \
    crate://crates.io/rayon/1.5.3 \
    crate://crates.io/rayon-core/1.9.3 \
    crate://crates.io/redox_syscall/0.2.13 \
    crate://crates.io/regex/1.5.6 \
    crate://crates.io/regex-syntax/0.6.26 \
    crate://crates.io/rustc_version/0.4.0 \
    crate://crates.io/rustversion/1.0.6 \
    crate://crates.io/ryu/1.0.10 \
    crate://crates.io/scopeguard/1.1.0 \
    crate://crates.io/semver/1.0.10 \
    crate://crates.io/serde/1.0.137 \
    crate://crates.io/serde_bytes/0.11.6 \
    crate://crates.io/serde_derive/1.0.137 \
    crate://crates.io/serde_json/1.0.81 \
    crate://crates.io/sha2/0.9.9 \
    crate://crates.io/sha2/0.10.2 \
    crate://crates.io/sha3/0.10.1 \
    crate://crates.io/sized-chunks/0.6.5 \
    crate://crates.io/smallvec/1.8.0 \
    crate://crates.io/solana-frozen-abi/1.10.35 \
    crate://crates.io/solana-frozen-abi-macro/1.10.35 \
    crate://crates.io/solana-program/1.10.35 \
    crate://crates.io/solana-sdk-macro/1.10.35 \
    crate://crates.io/subtle/2.4.1 \
    crate://crates.io/syn/1.0.96 \
    crate://crates.io/thiserror/1.0.31 \
    crate://crates.io/thiserror-impl/1.0.31 \
    crate://crates.io/toml/0.5.9 \
    crate://crates.io/typenum/1.15.0 \
    crate://crates.io/unicode-ident/1.0.1 \
    crate://crates.io/unicode-segmentation/1.9.0 \
    crate://crates.io/version_check/0.9.4 \
    crate://crates.io/wasi/0.9.0+wasi-snapshot-preview1 \
    crate://crates.io/wasi/0.11.0+wasi-snapshot-preview1 \
    crate://crates.io/wasm-bindgen/0.2.81 \
    crate://crates.io/wasm-bindgen-backend/0.2.81 \
    crate://crates.io/wasm-bindgen-macro/0.2.81 \
    crate://crates.io/wasm-bindgen-macro-support/0.2.81 \
    crate://crates.io/wasm-bindgen-shared/0.2.81 \
    crate://crates.io/web-sys/0.3.58 \
    crate://crates.io/windows-sys/0.36.1 \
    crate://crates.io/windows_aarch64_msvc/0.36.1 \
    crate://crates.io/windows_i686_gnu/0.36.1 \
    crate://crates.io/windows_i686_msvc/0.36.1 \
    crate://crates.io/windows_x86_64_gnu/0.36.1 \
    crate://crates.io/windows_x86_64_msvc/0.36.1 \
    crate://crates.io/yansi/0.5.1 \
    crate://crates.io/zeroize/1.3.0 \
"
