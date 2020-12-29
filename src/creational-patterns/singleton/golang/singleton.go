package singleton

import "sync"

var once sync.Once

type singleton struct {
	count int32
}

var instance *singleton

func GetInstance() *singleton {
	once.Do(func() {
		instance = &singleton{}
	})
	return instance
}
