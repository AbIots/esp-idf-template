set(projectSrc "src/test-component.cpp")
idf_component_register(SRCS "${projectSrc}"
                    INCLUDE_DIRS "include"
                    REQUIRES "esp_common")