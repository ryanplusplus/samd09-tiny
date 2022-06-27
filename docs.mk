HARDWARE_MANUAL_URL :=http://ww1.microchip.com/downloads/en/devicedoc/atmel-42414-sam-d09_datasheet.pdf
DATASHEET_URL :=http://ww1.microchip.com/downloads/en/devicedoc/atmel-42414-sam-d09_datasheet.pdf

.PHONY: hardware_manual
hardware_manual:
	@xdg-open $(HARDWARE_MANUAL_URL)

.PHONY: datasheet
datasheet:
	@xdg-open $(DATASHEET_URL)
