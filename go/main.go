package main

import (
	"fmt"
	"os"

	"github.com/akamensky/argparse"

	logic "github.com/uosjead/DancingRobot/logic"
)

func main() {
	parser := argparse.NewParser("print", "Prints provided string to stdout")
	position := parser.IntPositional(&argparse.Options{Required: true})
	err := parser.Parse(os.Args)
	if err != nil {
		fmt.Print(parser.Usage(err))
	}
    logic.Do(position)
}
