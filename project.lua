local deps = "-lraylib -lGL -lm -lpthread -ldl -lrt -lX11"
local b = "gcc -o build/game src/main.c"

local files = {
	"src/scenes/World_Scene.c",
	"src/engine/Entity_Manager.c",
}

for i, file in ipairs(files) do
	b = b .. " " .. file
end

return {
	build = b .. " " .. deps,
	run = "build/game",
}
