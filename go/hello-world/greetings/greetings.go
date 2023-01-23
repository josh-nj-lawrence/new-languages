package greetings

import "fmt"

// Hello returns a greetings for the names person
func Hello(name string) string {
	// Return a freeting that embeds the name in a message
	message := fmt.Sprintf("Hi, %v. Welcome!", name)
	return message
}
