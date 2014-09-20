shinyServer(function(input, output) {
  
  output$main_plot <- renderPlot({
    
    hist(faithful$eruptions,
         probability = TRUE,
         breaks = as.numeric(input$n_breaks),
         xlab = "Frequency",
         main = "Shake Log")
    
    if (input$individual_obs) {
      rug(faithful$eruptions)
    }
    
    if (input$density) {
      dens <- density(faithful$eruptions,
                      adjust = input$bw_adjust)
      lines(dens, col = "blue")
    }
    
  })
})