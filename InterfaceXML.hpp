#ifndef AEQUATIO_AEQUATIOUI_H_HPP
#define AEQUATIO_AEQUATIOUI_H_HPP


namespace Aequatio
{
    const char InterfaceXML[] = R"ESCAPE(
<?xml version="1.0" encoding="UTF-8"?>
<!-- Generated with glade 3.20.0 -->
<interface>
  <requires lib="gtk+" version="3.20"/>
  <object class="GtkAdjustment" id="Adustment.Precision">
    <property name="lower">2</property>
    <property name="upper">16</property>
    <property name="value">6</property>
    <property name="step_increment">1</property>
    <property name="page_increment">10</property>
  </object>
  <object class="GtkWindow" id="Window.Main">
    <property name="can_focus">False</property>
    <property name="resizable">False</property>
    <child>
      <object class="GtkBox">
        <property name="visible">True</property>
        <property name="can_focus">False</property>
        <property name="orientation">vertical</property>
        <child>
          <object class="GtkMenuBar">
            <property name="visible">True</property>
            <property name="can_focus">False</property>
            <child>
              <object class="GtkMenuItem">
                <property name="visible">True</property>
                <property name="can_focus">False</property>
                <property name="label" translatable="yes">_File</property>
                <property name="use_underline">True</property>
                <child type="submenu">
                  <object class="GtkMenu">
                    <property name="visible">True</property>
                    <property name="can_focus">False</property>
                    <child>
                      <object class="GtkImageMenuItem" id="Menu.Quit">
                        <property name="label">gtk-quit</property>
                        <property name="visible">True</property>
                        <property name="can_focus">False</property>
                        <property name="use_underline">True</property>
                        <property name="use_stock">True</property>
                      </object>
                    </child>
                  </object>
                </child>
              </object>
            </child>
          </object>
          <packing>
            <property name="expand">False</property>
            <property name="fill">True</property>
            <property name="position">0</property>
          </packing>
        </child>
        <child>
          <object class="GtkGrid" id="Grid.Global">
            <property name="visible">True</property>
            <property name="can_focus">False</property>
            <property name="row_spacing">8</property>
            <property name="column_spacing">8</property>
            <child>
              <object class="GtkBox">
                <property name="visible">True</property>
                <property name="can_focus">False</property>
                <child>
                  <object class="GtkLabel">
                    <property name="visible">True</property>
                    <property name="can_focus">False</property>
                    <property name="label" translatable="yes">⎧
⎨
⎩</property>
                  </object>
                  <packing>
                    <property name="expand">False</property>
                    <property name="fill">True</property>
                    <property name="position">0</property>
                  </packing>
                </child>
                <child>
                  <object class="GtkGrid">
                    <property name="visible">True</property>
                    <property name="can_focus">False</property>
                    <property name="valign">center</property>
                    <property name="row_spacing">4</property>
                    <child>
                      <object class="GtkEntry" id="Entry.A">
                        <property name="width_request">4</property>
                        <property name="height_request">2</property>
                        <property name="visible">True</property>
                        <property name="can_focus">True</property>
                        <property name="width_chars">4</property>
                        <property name="text" translatable="yes">2</property>
                        <property name="caps_lock_warning">False</property>
                        <property name="placeholder_text" translatable="yes">a</property>
                        <property name="input_purpose">number</property>
                      </object>
                      <packing>
                        <property name="left_attach">0</property>
                        <property name="top_attach">0</property>
                      </packing>
                    </child>
                    <child>
                      <object class="GtkLabel">
                        <property name="visible">True</property>
                        <property name="can_focus">False</property>
                        <property name="label" translatable="yes">x₁² + </property>
                      </object>
                      <packing>
                        <property name="left_attach">1</property>
                        <property name="top_attach">0</property>
                      </packing>
                    </child>
                    <child>
                      <object class="GtkEntry" id="Entry.B">
                        <property name="width_request">4</property>
                        <property name="height_request">1</property>
                        <property name="visible">True</property>
                        <property name="can_focus">True</property>
                        <property name="width_chars">4</property>
                        <property name="text" translatable="yes">-1</property>
                        <property name="placeholder_text" translatable="yes">b</property>
                      </object>
                      <packing>
                        <property name="left_attach">2</property>
                        <property name="top_attach">0</property>
                      </packing>
                    </child>
                    <child>
                      <object class="GtkLabel">
                        <property name="visible">True</property>
                        <property name="can_focus">False</property>
                        <property name="label" translatable="yes">x₁x₂ + </property>
                      </object>
                      <packing>
                        <property name="left_attach">3</property>
                        <property name="top_attach">0</property>
                      </packing>
                    </child>
                    <child>
                      <object class="GtkEntry" id="Entry.C">
                        <property name="height_request">1</property>
                        <property name="visible">True</property>
                        <property name="can_focus">True</property>
                        <property name="width_chars">4</property>
                        <property name="text" translatable="yes">-5</property>
                        <property name="placeholder_text" translatable="yes">c</property>
                      </object>
                      <packing>
                        <property name="left_attach">4</property>
                        <property name="top_attach">0</property>
                      </packing>
                    </child>
                    <child>
                      <object class="GtkLabel">
                        <property name="visible">True</property>
                        <property name="can_focus">False</property>
                        <property name="label" translatable="yes">x₁ + </property>
                      </object>
                      <packing>
                        <property name="left_attach">5</property>
                        <property name="top_attach">0</property>
                      </packing>
                    </child>
                    <child>
                      <object class="GtkEntry" id="Entry.D">
                        <property name="height_request">1</property>
                        <property name="visible">True</property>
                        <property name="can_focus">True</property>
                        <property name="width_chars">4</property>
                        <property name="text" translatable="yes">1</property>
                        <property name="placeholder_text" translatable="yes">d</property>
                      </object>
                      <packing>
                        <property name="left_attach">6</property>
                        <property name="top_attach">0</property>
                      </packing>
                    </child>
                    <child>
                      <object class="GtkLabel">
                        <property name="visible">True</property>
                        <property name="can_focus">False</property>
                        <property name="label" translatable="yes"> = 0</property>
                      </object>
                      <packing>
                        <property name="left_attach">7</property>
                        <property name="top_attach">0</property>
                      </packing>
                    </child>
                    <child>
                      <object class="GtkEntry" id="Entry.E">
                        <property name="width_request">4</property>
                        <property name="height_request">1</property>
                        <property name="visible">True</property>
                        <property name="can_focus">True</property>
                        <property name="width_chars">4</property>
                        <property name="text" translatable="yes">1</property>
                        <property name="placeholder_text" translatable="yes">e</property>
                      </object>
                      <packing>
                        <property name="left_attach">0</property>
                        <property name="top_attach">1</property>
                      </packing>
                    </child>
                    <child>
                      <object class="GtkLabel">
                        <property name="visible">True</property>
                        <property name="can_focus">False</property>
                        <property name="label" translatable="yes">x₁ + </property>
                      </object>
                      <packing>
                        <property name="left_attach">1</property>
                        <property name="top_attach">1</property>
                      </packing>
                    </child>
                    <child>
                      <object class="GtkEntry" id="Entry.F">
                        <property name="width_request">4</property>
                        <property name="visible">True</property>
                        <property name="can_focus">True</property>
                        <property name="width_chars">4</property>
                        <property name="text" translatable="yes">3</property>
                        <property name="placeholder_text" translatable="yes">f</property>
                      </object>
                      <packing>
                        <property name="left_attach">2</property>
                        <property name="top_attach">1</property>
                      </packing>
                    </child>
                    <child>
                      <object class="GtkLabel">
                        <property name="visible">True</property>
                        <property name="can_focus">False</property>
                        <property name="label" translatable="yes">lg(x₁) + </property>
                      </object>
                      <packing>
                        <property name="left_attach">3</property>
                        <property name="top_attach">1</property>
                      </packing>
                    </child>
                    <child>
                      <object class="GtkEntry" id="Entry.G">
                        <property name="visible">True</property>
                        <property name="can_focus">True</property>
                        <property name="width_chars">4</property>
                        <property name="text" translatable="yes">-1</property>
                        <property name="placeholder_text" translatable="yes">g</property>
                      </object>
                      <packing>
                        <property name="left_attach">4</property>
                        <property name="top_attach">1</property>
                      </packing>
                    </child>
                    <child>
                      <object class="GtkLabel">
                        <property name="visible">True</property>
                        <property name="can_focus">False</property>
                        <property name="label" translatable="yes">x₂² + </property>
                      </object>
                      <packing>
                        <property name="left_attach">5</property>
                        <property name="top_attach">1</property>
                      </packing>
                    </child>
                    <child>
                      <object class="GtkEntry" id="Entry.H">
                        <property name="visible">True</property>
                        <property name="can_focus">True</property>
                        <property name="width_chars">4</property>
                        <property name="text" translatable="yes">0</property>
                        <property name="placeholder_text" translatable="yes">h</property>
                      </object>
                      <packing>
                        <property name="left_attach">6</property>
                        <property name="top_attach">1</property>
                      </packing>
                    </child>
                    <child>
                      <object class="GtkLabel">
                        <property name="visible">True</property>
                        <property name="can_focus">False</property>
                        <property name="label" translatable="yes"> = 0</property>
                      </object>
                      <packing>
                        <property name="left_attach">7</property>
                        <property name="top_attach">1</property>
                      </packing>
                    </child>
                  </object>
                  <packing>
                    <property name="expand">True</property>
                    <property name="fill">True</property>
                    <property name="position">1</property>
                  </packing>
                </child>
              </object>
              <packing>
                <property name="left_attach">0</property>
                <property name="top_attach">0</property>
              </packing>
            </child>
            <child>
              <object class="GtkGrid">
                <property name="visible">True</property>
                <property name="can_focus">False</property>
                <property name="row_spacing">4</property>
                <child>
                  <object class="GtkLabel">
                    <property name="visible">True</property>
                    <property name="can_focus">False</property>
                    <property name="halign">start</property>
                    <property name="label" translatable="yes">Initial value: </property>
                    <property name="use_markup">True</property>
                    <property name="justify">fill</property>
                  </object>
                  <packing>
                    <property name="left_attach">0</property>
                    <property name="top_attach">0</property>
                  </packing>
                </child>
                <child>
                  <object class="GtkSpinButton" id="Entry.Epsilon">
                    <property name="width_request">2</property>
                    <property name="visible">True</property>
                    <property name="can_focus">True</property>
                    <property name="width_chars">2</property>
                    <property name="max_width_chars">2</property>
                    <property name="caps_lock_warning">False</property>
                    <property name="adjustment">Adustment.Precision</property>
                    <property name="numeric">True</property>
                    <property name="update_policy">if-valid</property>
                  </object>
                  <packing>
                    <property name="left_attach">1</property>
                    <property name="top_attach">1</property>
                    <property name="width">5</property>
                  </packing>
                </child>
                <child>
                  <object class="GtkLabel">
                    <property name="visible">True</property>
                    <property name="can_focus">False</property>
                    <property name="label" translatable="yes">Precison (digits): </property>
                  </object>
                  <packing>
                    <property name="left_attach">0</property>
                    <property name="top_attach">1</property>
                  </packing>
                </child>
                <child>
                  <object class="GtkLabel">
                    <property name="visible">True</property>
                    <property name="can_focus">False</property>
                    <property name="label" translatable="yes">)</property>
                  </object>
                  <packing>
                    <property name="left_attach">5</property>
                    <property name="top_attach">0</property>
                  </packing>
                </child>
                <child>
                  <object class="GtkEntry" id="Entry.X2">
                    <property name="visible">True</property>
                    <property name="can_focus">True</property>
                    <property name="width_chars">4</property>
                    <property name="text" translatable="yes">2.2</property>
                  </object>
                  <packing>
                    <property name="left_attach">4</property>
                    <property name="top_attach">0</property>
                  </packing>
                </child>
                <child>
                  <object class="GtkLabel">
                    <property name="visible">True</property>
                    <property name="can_focus">False</property>
                    <property name="label" translatable="yes">, </property>
                  </object>
                  <packing>
                    <property name="left_attach">3</property>
                    <property name="top_attach">0</property>
                  </packing>
                </child>
                <child>
                  <object class="GtkEntry" id="Entry.X1">
                    <property name="visible">True</property>
                    <property name="can_focus">True</property>
                    <property name="width_chars">4</property>
                    <property name="text" translatable="yes">3.5</property>
                  </object>
                  <packing>
                    <property name="left_attach">2</property>
                    <property name="top_attach">0</property>
                  </packing>
                </child>
                <child>
                  <object class="GtkLabel">
                    <property name="visible">True</property>
                    <property name="can_focus">False</property>
                    <property name="label" translatable="yes">(</property>
                  </object>
                  <packing>
                    <property name="left_attach">1</property>
                    <property name="top_attach">0</property>
                  </packing>
                </child>
                <child>
                  <object class="GtkButton" id="Button.Compute">
                    <property name="label" translatable="yes">Compute</property>
                    <property name="visible">True</property>
                    <property name="can_focus">True</property>
                    <property name="receives_default">True</property>
                  </object>
                  <packing>
                    <property name="left_attach">0</property>
                    <property name="top_attach">2</property>
                    <property name="width">6</property>
                  </packing>
                </child>
              </object>
              <packing>
                <property name="left_attach">2</property>
                <property name="top_attach">0</property>
              </packing>
            </child>
            <child>
              <object class="GtkSeparator">
                <property name="visible">True</property>
                <property name="can_focus">False</property>
              </object>
              <packing>
                <property name="left_attach">1</property>
                <property name="top_attach">0</property>
                <property name="height">3</property>
              </packing>
            </child>
            <child>
              <object class="GtkSeparator">
                <property name="visible">True</property>
                <property name="can_focus">False</property>
              </object>
              <packing>
                <property name="left_attach">0</property>
                <property name="top_attach">1</property>
              </packing>
            </child>
            <child>
              <object class="GtkSeparator">
                <property name="visible">True</property>
                <property name="can_focus">False</property>
              </object>
              <packing>
                <property name="left_attach">2</property>
                <property name="top_attach">1</property>
              </packing>
            </child>
            <child>
              <object class="GtkGrid">
                <property name="visible">True</property>
                <property name="can_focus">False</property>
                <property name="column_spacing">8</property>
                <child>
                  <object class="GtkLabel">
                    <property name="visible">True</property>
                    <property name="can_focus">False</property>
                    <property name="hexpand">True</property>
                    <property name="label" translatable="yes">&lt;b&gt;Jacobi method&lt;/b&gt;</property>
                    <property name="use_markup">True</property>
                  </object>
                  <packing>
                    <property name="left_attach">0</property>
                    <property name="top_attach">0</property>
                    <property name="width">2</property>
                  </packing>
                </child>
                <child>
                  <object class="GtkLabel">
                    <property name="visible">True</property>
                    <property name="can_focus">False</property>
                    <property name="halign">start</property>
                    <property name="label" translatable="yes">Solution:</property>
                  </object>
                  <packing>
                    <property name="left_attach">0</property>
                    <property name="top_attach">1</property>
                  </packing>
                </child>
                <child>
                  <object class="GtkSeparator">
                    <property name="visible">True</property>
                    <property name="can_focus">False</property>
                    <property name="margin_top">4</property>
                    <property name="margin_bottom">4</property>
                  </object>
                  <packing>
                    <property name="left_attach">0</property>
                    <property name="top_attach">5</property>
                    <property name="width">2</property>
                  </packing>
                </child>
                <child>
                  <object class="GtkLabel">
                    <property name="visible">True</property>
                    <property name="can_focus">False</property>
                    <property name="hexpand">True</property>
                    <property name="label" translatable="yes">&lt;b&gt;Gauss-Seidel method&lt;/b&gt;</property>
                    <property name="use_markup">True</property>
                  </object>
                  <packing>
                    <property name="left_attach">0</property>
                    <property name="top_attach">6</property>
                    <property name="width">2</property>
                  </packing>
                </child>
                <child>
                  <object class="GtkLabel">
                    <property name="visible">True</property>
                    <property name="can_focus">False</property>
                    <property name="halign">start</property>
                    <property name="label" translatable="yes">Time (μs):</property>
                  </object>
                  <packing>
                    <property name="left_attach">0</property>
                    <property name="top_attach">10</property>
                  </packing>
                </child>
                <child>
                  <object class="GtkLabel">
                    <property name="visible">True</property>
                    <property name="can_focus">False</property>
                    <property name="halign">start</property>
                    <property name="label" translatable="yes">Time (μs):</property>
                  </object>
                  <packing>
                    <property name="left_attach">0</property>
                    <property name="top_attach">4</property>
                  </packing>
                </child>
                <child>
                  <object class="GtkLabel">
                    <property name="visible">True</property>
                    <property name="can_focus">False</property>
                    <property name="halign">start</property>
                    <property name="label" translatable="yes">Iterations:</property>
                  </object>
                  <packing>
                    <property name="left_attach">0</property>
                    <property name="top_attach">2</property>
                  </packing>
                </child>
                <child>
                  <object class="GtkLabel">
                    <property name="visible">True</property>
                    <property name="can_focus">False</property>
                    <property name="halign">start</property>
                    <property name="label" translatable="yes">Operations:</property>
                  </object>
                  <packing>
                    <property name="left_attach">0</property>
                    <property name="top_attach">3</property>
                  </packing>
                </child>
                <child>
                  <object class="GtkLabel">
                    <property name="visible">True</property>
                    <property name="can_focus">False</property>
                    <property name="halign">start</property>
                    <property name="label" translatable="yes">Solution:</property>
                  </object>
                  <packing>
                    <property name="left_attach">0</property>
                    <property name="top_attach">7</property>
                  </packing>
                </child>
                <child>
                  <object class="GtkLabel">
                    <property name="visible">True</property>
                    <property name="can_focus">False</property>
                    <property name="halign">start</property>
                    <property name="label" translatable="yes">Iterations:</property>
                  </object>
                  <packing>
                    <property name="left_attach">0</property>
                    <property name="top_attach">8</property>
                  </packing>
                </child>
                <child>
                  <object class="GtkLabel">
                    <property name="visible">True</property>
                    <property name="can_focus">False</property>
                    <property name="halign">start</property>
                    <property name="label" translatable="yes">Operations:</property>
                  </object>
                  <packing>
                    <property name="left_attach">0</property>
                    <property name="top_attach">9</property>
                  </packing>
                </child>
                <child>
                  <object class="GtkLabel" id="Jacobi.Solution">
                    <property name="visible">True</property>
                    <property name="can_focus">False</property>
                    <property name="halign">start</property>
                    <property name="label" translatable="yes">-</property>
                  </object>
                  <packing>
                    <property name="left_attach">1</property>
                    <property name="top_attach">1</property>
                  </packing>
                </child>
                <child>
                  <object class="GtkLabel" id="Jacobi.Iterations">
                    <property name="visible">True</property>
                    <property name="can_focus">False</property>
                    <property name="halign">start</property>
                    <property name="label" translatable="yes">-</property>
                  </object>
                  <packing>
                    <property name="left_attach">1</property>
                    <property name="top_attach">2</property>
                  </packing>
                </child>
                <child>
                  <object class="GtkLabel" id="Jacobi.Operations">
                    <property name="visible">True</property>
                    <property name="can_focus">False</property>
                    <property name="halign">start</property>
                    <property name="label" translatable="yes">-</property>
                  </object>
                  <packing>
                    <property name="left_attach">1</property>
                    <property name="top_attach">3</property>
                  </packing>
                </child>
                <child>
                  <object class="GtkLabel" id="Jacobi.Time">
                    <property name="visible">True</property>
                    <property name="can_focus">False</property>
                    <property name="halign">start</property>
                    <property name="label" translatable="yes">-</property>
                  </object>
                  <packing>
                    <property name="left_attach">1</property>
                    <property name="top_attach">4</property>
                  </packing>
                </child>
                <child>
                  <object class="GtkLabel" id="Seidel.Solution">
                    <property name="visible">True</property>
                    <property name="can_focus">False</property>
                    <property name="halign">start</property>
                    <property name="label" translatable="yes">-</property>
                  </object>
                  <packing>
                    <property name="left_attach">1</property>
                    <property name="top_attach">7</property>
                  </packing>
                </child>
                <child>
                  <object class="GtkLabel" id="Seidel.Iterations">
                    <property name="visible">True</property>
                    <property name="can_focus">False</property>
                    <property name="halign">start</property>
                    <property name="label" translatable="yes">-</property>
                  </object>
                  <packing>
                    <property name="left_attach">1</property>
                    <property name="top_attach">8</property>
                  </packing>
                </child>
                <child>
                  <object class="GtkLabel" id="Seidel.Operations">
                    <property name="visible">True</property>
                    <property name="can_focus">False</property>
                    <property name="halign">start</property>
                    <property name="label" translatable="yes">-</property>
                  </object>
                  <packing>
                    <property name="left_attach">1</property>
                    <property name="top_attach">9</property>
                  </packing>
                </child>
                <child>
                  <object class="GtkLabel" id="Seidel.Time">
                    <property name="visible">True</property>
                    <property name="can_focus">False</property>
                    <property name="halign">start</property>
                    <property name="label" translatable="yes">-</property>
                  </object>
                  <packing>
                    <property name="left_attach">1</property>
                    <property name="top_attach">10</property>
                  </packing>
                </child>
              </object>
              <packing>
                <property name="left_attach">2</property>
                <property name="top_attach">2</property>
              </packing>
            </child>
            <child>
              <placeholder/>
            </child>
          </object>
          <packing>
            <property name="expand">False</property>
            <property name="fill">True</property>
            <property name="position">1</property>
          </packing>
        </child>
      </object>
    </child>
    <child type="titlebar">
      <placeholder/>
    </child>
  </object>
  <object class="GtkMessageDialog" id="Dialog.NoSolution">
    <property name="can_focus">False</property>
    <property name="resizable">False</property>
    <property name="modal">True</property>
    <property name="type_hint">dialog</property>
    <property name="transient_for">Window.Main</property>
    <property name="text" translatable="yes">No solution found</property>
    <property name="secondary_text" translatable="yes">System may have no solutions or bad inital values given</property>
    <child internal-child="vbox">
      <object class="GtkBox">
        <property name="can_focus">False</property>
        <property name="orientation">vertical</property>
        <property name="spacing">2</property>
        <child internal-child="action_area">
          <object class="GtkButtonBox">
            <property name="can_focus">False</property>
            <property name="homogeneous">True</property>
            <property name="layout_style">end</property>
            <child>
              <object class="GtkButton">
                <property name="label" translatable="yes">Ok</property>
                <property name="visible">True</property>
                <property name="can_focus">True</property>
                <property name="receives_default">True</property>
              </object>
              <packing>
                <property name="expand">True</property>
                <property name="fill">True</property>
                <property name="position">0</property>
              </packing>
            </child>
            <child>
              <placeholder/>
            </child>
          </object>
          <packing>
            <property name="expand">False</property>
            <property name="fill">False</property>
            <property name="position">0</property>
          </packing>
        </child>
      </object>
    </child>
    <child>
      <placeholder/>
    </child>
  </object>
  <object class="GtkMessageDialog" id="Dialog.WrongFormat">
    <property name="can_focus">False</property>
    <property name="resizable">False</property>
    <property name="modal">True</property>
    <property name="type_hint">dialog</property>
    <property name="transient_for">Window.Main</property>
    <property name="text" translatable="yes">Parsing Error!</property>
    <property name="secondary_text" translatable="yes">Wrong input format</property>
    <child internal-child="vbox">
      <object class="GtkBox">
        <property name="can_focus">False</property>
        <property name="orientation">vertical</property>
        <property name="spacing">2</property>
        <child internal-child="action_area">
          <object class="GtkButtonBox">
            <property name="can_focus">False</property>
            <property name="homogeneous">True</property>
            <property name="layout_style">end</property>
            <child>
              <object class="GtkButton">
                <property name="label" translatable="yes">Ok</property>
                <property name="visible">True</property>
                <property name="can_focus">True</property>
                <property name="receives_default">True</property>
              </object>
              <packing>
                <property name="expand">True</property>
                <property name="fill">True</property>
                <property name="position">0</property>
              </packing>
            </child>
            <child>
              <placeholder/>
            </child>
          </object>
          <packing>
            <property name="expand">False</property>
            <property name="fill">False</property>
            <property name="position">0</property>
          </packing>
        </child>
      </object>
    </child>
    <child>
      <placeholder/>
    </child>
  </object>
  <object class="GtkTextBuffer"/>
</interface>
)ESCAPE";
}


#endif //AEQUATIO_AEQUATIOUI_H_HPP
