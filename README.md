## gRPC

Advantages:
	- Strongly Typed
	- Generate Code - Java, Golang, Python
	- Schema Evolution - Backward / Forward Compatibilty
	- Comments - 
	- Data serialized in Binary 

Disadvantage:
	- Serialized data not human readable
	- Less Support

### Protocol Buffers
- syntax
- message
- service

## Scalar Types
- Numbers (Default value: 0)
	- int32, int64, uint32, uint64
	- uint32, uint64
	- fixed32, fixed64, sfixed32, sfixed64
	- float, double
- Boolean (Default: false)
	- bool
- String (Default: empty string) (UTF8 or 7-bit ASCII)
	- string 
- Bytes (Default: empty bytes)
	- bytes


## Tags
	- Field names are not important for serialization and deserialization.
	- Tags range 1 to 536,870,911
	- Reserved Tags: 19,000 To 19,999

## Repeated fields
- 0 or more elements of that type.
- Default value: empty list

## Enums
- `enum <type> <name> = <tag>;`
- Default value: first value
- First Tag : 0


## Same Level Vs. Nested Messages & Enums
- 