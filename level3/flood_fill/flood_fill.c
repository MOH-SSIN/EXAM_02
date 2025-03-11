 typedef struct  s_point
  {
    int           x;
    int           y;
  }               t_point;

void fill(char  **t, t_point size, t_point pos, char original)
{
    if(pos.x < 0|| pos.x >= size.x || pos.y < 0|| pos.y >= size.y || t[pos.y][pos.x] != original) 
        return;
    t[pos.y][pos.x] = 'F';
    
        fill(t, size, (t_point){pos.x ,pos.y+1}, original);
        fill(t, size, (t_point){pos.x ,pos.y-1}, original);
        fill(t, size, (t_point){pos.x-1 ,pos.y}, original);
        fill(t, size, (t_point){pos.x+1 ,pos.y}, original);
}
  void  flood_fill(char **tab, t_point size, t_point begin)
  {
    fill(tab,size, begin, tab[begin.y][begin.x] );
  }