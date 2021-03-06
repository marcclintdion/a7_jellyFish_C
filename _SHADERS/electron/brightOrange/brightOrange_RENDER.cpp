    glUseProgram(brightOrange_SHADER);     
    //------------------------------------------------------------------------------------------------------   
    glVertexAttribPointer(0,   3, GL_FLOAT, GL_FALSE, 32, BUFFER_OFFSET(0));                                                                                                  
    glEnableVertexAttribArray(0);	                                                                                                                                          
    glVertexAttribPointer(1,   3, GL_FLOAT, GL_FALSE, 32, BUFFER_OFFSET(12));                                                                                                  
    glEnableVertexAttribArray(1);    
    glVertexAttribPointer(2,   2, GL_FLOAT, GL_FALSE, 32, BUFFER_OFFSET(24));                                                                                                 
    glEnableVertexAttribArray(2);                                                                                                                                               
    //---------------------------------------------------------------------------------------------------------------------------------------------------|__UNIFORMS          
    glUniform4f(UNIFORM_LIGHT_POSITION_01_brightOrange, brightOrange_LIGHT_POSITION_01[0], brightOrange_LIGHT_POSITION_01[1], brightOrange_LIGHT_POSITION_01[2], brightOrange_LIGHT_POSITION_01[3]);        
    glUniform1f(UNIFORM_SHININESS_brightOrange, brightOrange_SHININESS);                                                                                                                  
    glUniform1f(UNIFORM_ATTENUATION_brightOrange, brightOrange_ATTENUATION);                                                                                                                  
    glUniformMatrix4fv(UNIFORM_MODELVIEWPROJ_brightOrange,   1,0,  mvpMatrix);                                                                                                      
    glUniformMatrix4fv(UNIFORM_LIGHT_MATRIX_brightOrange,    1,0,  lightMatrix1);                                                                                                    
    glUniform1i (UNIFORM_TEXTURE_DOT3_brightOrange, 1);     
     glUniform1i (UNIFORM_TEXTURE_brightOrange, 0 );    
