#!/bash/bin

function clean_dir()
{
	rm -rf $1/*~
}

clean_dir .
clean_dir Src
clean_dir Src/AVIMaker
clean_dir Src/AsyncNet
clean_dir Src/Cosmos
clean_dir Src/DXRenderer
clean_dir Src/Effects
clean_dir Src/Explosions
clean_dir Src/Flight
clean_dir Src/Graphics
clean_dir Src/GraphicsXP
clean_dir Src/Input
clean_dir Src/Inter
clean_dir Src/MOM
clean_dir Src/Mail
clean_dir Src/Map
clean_dir Src/Math
clean_dir Src/MissionEditor
clean_dir Src/MitkaGraphics
clean_dir Src/MultiPlayer
clean_dir Src/NetSystem
clean_dir Src/Operator
clean_dir Src/Options
clean_dir Src/RenderEffects
clean_dir Src/Sound
clean_dir Src/Terrain
clean_dir Src/UserInterface
clean_dir Src/View
clean_dir Src/Visualizer
clean_dir Src/WRadio
clean_dir Src/Weapons
clean_dir Src/Weather
clean_dir Src/World
clean_dir Src/WorldGeneral
clean_dir Src/WorldSmall
clean_dir Src/ZweiBlau
clean_dir Src/edObjects
clean_dir Src/edTerrain
clean_dir Src/ogg
clean_dir Src/vorbis
clean_dir Src/vorbisfile
clean_dir Src/zlib

clean_dir LO_Viewer/Common
clean_dir LO_Viewer/CoreScene
clean_dir LO_Viewer/DXRenderer
clean_dir LO_Viewer/GraphicsXP
clean_dir LO_Viewer/LOMScene
clean_dir LO_Viewer/Math
clean_dir LO_Viewer/MaxScene
clean_dir LO_Viewer/maxUtils

clean_dir info

