package fr.grame.simpleguidoeditor.drawcommand;

import java.lang.StringBuilder;
import android.graphics.Canvas;
import fr.grame.simpleguidoeditor.GuidoCanvasView;

import java.util.*;
   
public class NotifySizeCommand extends GuidoDrawCommand implements PrintableDrawCommand, DrawToCanvas {

  public int _width;
  public int _height;

  public NotifySizeCommand(int width, int height) {
    super();
    _width = width;
    _height = height;
  }

  @Override
  public String asString() {
    StringBuilder out = new StringBuilder();
    out.append("NotifySize");
    out.append(" ");
    out.append(_width);
    out.append(" ");
    out.append(_height);
    return out.toString();
  }
  @Override
  public void drawToCanvas(Canvas canvas, GuidoCanvasView view) {
    view._GLOBAL_RESCALE_FACTOR = view.getWidth() / _width;
  }
}
