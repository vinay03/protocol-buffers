package main

import (
	"log"

	"github.com/golang/protobuf/jsonpb/protojson"
	"github.com/golang/protobuf/proto"
	// "google.golang.org/protobuf/encoding/protojson"
)

func toJSON(pb proto.Message) string {
	out, err := protojson.Marshal(pb)
	if err != nil {
		log.Fatalln("Cant convert to JSON", err)
		return ""
	}
	return string(out)
}
func fromJSON(in string, pb proto.Message) {
	if err := protojson.Unmarshal([]byte(in), pb); err != nil {
		log.Fatalln("Couldn't unmarshal from JSON", err)
	}
}
