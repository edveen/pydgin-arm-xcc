#source: attr-merge-wchar-0.s
#source: attr-merge-wchar-2.s
#as:
#ld: -r --no-wchar-size-warning
#readelf: -A

Attribute Section: aeabi
File Attributes
  Tag_CPU_name: "ARM7TDMI"
  Tag_CPU_arch: v4T
  Tag_ABI_PCS_wchar_t: 2
  Tag_ABI_FP_denormal: Needed
  Tag_ABI_FP_exceptions: Needed
  Tag_ABI_FP_number_model: IEEE 754
  Tag_ABI_align8_needed: Yes
  Tag_ABI_align8_preserved: Yes, except leaf SP
  Tag_ABI_enum_size: small
  Tag_ABI_optimization_goals: Aggressive Debug
