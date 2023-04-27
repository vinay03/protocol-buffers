## Protocol Buffers - gRPC

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
- package
- import
- message
	- `oneof`: For specifying rule to expect one of the many fields.
		```
			oneof result {
				string message = 1;
				uint32 id = 2;
			}
		```
	- `map`:
		- `map<string, IdWrapper> ids = 1;`
- service
- enum

## Scalar Types
- Numbers (Default value: 0)
	- int32, int64
	- uint32, uint64
	- fixed32, fixed64, sfixed32, sfixed64
	- float, double
- Boolean (Default: false)
	- bool
- String (Default: empty string) (UTF8 or 7-bit ASCII)
	- string 
- Bytes (Default: empty bytes)
	- bytes

## Data type deciding Criteria
- range
- Signed or Unsigned
	- uint32, uint64: No negative value
	- int32, int64: Accept negative value as well
		- `but not efficient at serializing negative values`
		- negative values are always 10 bytes long
	- sint32, sing64: accept negative value as well
		- `but less efficient at serializing positive values`
		- positive values are always 10 bytes long
- varint or not
	- fixed32, sfixed32: Always be 4 bytes
	- fixed64, sfixed64: Always be 8 bytes

## Advanced datatype
- `oneof`
- `map`
- Well known types
	- `google.protobuf.Timestamp`
	- `google.protobuf.Duration`
	- https://protobuf.dev/reference/protobuf/google.protobuf/#index

## Tags
	- Field names are not important for serialization and deserialization.
	- Tags range 1 to 536,870,911
	- Reserved Tags Google: 19,000 To 19,999

## Repeated fields
- 0 or more elements of that type.
- Default value: empty list

## Enums
- `enum <type> <name> = <tag>;`
- Default value: first value
- First Tag : 0


## Same Level Vs. Nested Messages & Enums
- 


## Golang package
```
go install google.golang.org/protobuf/cmd/protoc-gen-go@latest
```

## Misc
	- Renaming fields:
		- Works fine as long as data type and tag are kept as it was.
	- Removing Fields:
		- To avoid the use of tag in future, use following syntax with keyword `reserved`
		```
		message Account {
			reserved 2;
			reserved "first_name"; //optional
			uint32 = 1;
		}
		```
		OR
		```
		message Account {
			reserved 2,15,9 to 11; // Tags: Individual and range
			reserved "first_name", "last_name"; // field names
			uint32 = 1;
		}
		```

## Protoc Compiler
- `


## protoc options
- Decode Raw
	- `cat protoc/simple.bin | protoc --decode_raw`
	- To decode binary text in raw format to human readable format.
- Decode
	- `cat protoc/simple.bin | protoc --decode=Simple protoc/simple.proto`
	- This decodes with a help of .proto file to give output in more useful format.
- Encode
	- `cat simple.txt | protoc --encode=Simple protoc/simple.proto > protoc/simple.pb`


## Naming conventions
- filename should be in lower case
- License header should go on very top
- Sequence: syntax, package, import, option, messages/enum/service
	- enum, message, service names: Camel case
- field names 
	- in lower case
	- no capital letters
	- no underscores
- `repeated` field name
	- use plural version of the word

## Service
```
service FooService {
	rpc GetSomething(GetSomethingRequest) returns (GetSomethingResponse);
	rpc ListSomething(ListSomethingRequest) returns (ListSomethingResponse);
}
```

## Examples
- Main repository examples: https://github.com/protocolbuffers/protobuf/tree/main/examples
- Some Google Apis types: https://github.com/googleapis/googleapis/tree/master/google/type
- Protocol Buffer itself (may be very complex) https://github.com/protocolbuffers/protobuf/tree/main/src/google/protobuf
- https://github.com/topics/protobuf


## Oficial Documentation 
- https://protobuf.dev/

