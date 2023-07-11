package main

import (
	"fmt"
	"os"

	"github.com/akamensky/argparse"

	logic "github.com/uosjead/DancingRobot/logic"
)

func main() {
	parser := argparse.NewParser(
		"dancingrobot",
		"A robot takes one step forward. Then two steps back.\n" +
		"Then every step after he steps forward the difference between the change in the previous two steps.",
	)
	position := parser.IntPositional(&argparse.Options{Required: true, Help: "position of robot"})
	err := parser.Parse(os.Args)
	if err == nil {
		logic.Do(position)
	} else {
		fmt.Print(parser.Usage(err))
	}

}
