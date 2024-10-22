mkdir -p ~/Library
mv ~/Downloads/arduino* ~/Library/
cd ~/Library
unzip arduino*
rm arduino*.zip
cd arduino*
echo 'alias arduino-ide="${HOME}/Library/arduino*/arduino-ide"' >> ~/.bashrc
