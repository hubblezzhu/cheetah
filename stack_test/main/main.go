//go:build linux

package main

import (
	"os"

	log "github.com/sirupsen/logrus"
)

func LoadBpfProg() {

}

func AttachBpfProg() {

}

func GetProfileData() {

}

func init() {
	log.SetOutput(os.Stdout)

	log.SetLevel(log.InfoLevel)
}

func main() {
	log.Info("Start main...")

	log.Info("Process Exited...")
}
