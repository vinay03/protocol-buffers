package main

import (
	"fmt"
	"io/ioutil"
	"log"

	"github.com/golang/protobuf/proto"
)

func writeToFile(fname string, pb proto.Message) {
	out, err := proto.Marshal(pb)

	if err != nil {
		log.Fatalln("can't serialize to bytes", err)
		return
	}

	if err = ioutil.WriteFile(fname, out, 0644); err != nil {
		log.Fatalln("cant write to file", err)
		return
	}

	fmt.Println("data has been written")

}

func readFromFile(fname string, pb proto.Message) {
	in, err := ioutil.ReadFile(fname)

	if err != nil {
		log.Fatalln("can't read file", err)
		return
	}
	if err = proto.Unmarshal(in, pb); err != nil {
		log.Fatalln("Couldn't unmarshal", err)
		return
	}
}
