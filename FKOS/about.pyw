import pygame,sys
pygame.init()
screen = pygame.display.set_mode((354.75,600))
pygame.display.set_caption("FKOS 11 beta")
myImg = pygame.image.load("C:\\FKOS\\about.png")
while True:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            sys.exit()
    screen.fill((255,255,255))
    screen.blit(myImg,(0,0))
    pygame.display.update()
