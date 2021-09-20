FROM qmkfm/base_container

ENV layout custom

RUN git clone --branch 0.13.34 --depth 1 --recursive https://github.com/qmk/qmk_firmware.git
WORKDIR qmk_firmware
RUN python3 -m pip install -r requirements.txt
COPY keymap keyboards/ergodox_ez/keymaps/$layout

RUN mkdir /output
VOLUME /output
CMD make ergodox_ez/glow:$layout && mv *.hex /output/
